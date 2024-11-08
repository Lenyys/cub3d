/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg_stats.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaresov <lmaresov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 13:15:35 by lmaresov          #+#    #+#             */
/*   Updated: 2024/11/03 13:30:53 by lmaresov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	check_stats(char *line, t_game *game)
{
	int	i;

	i = 0;
	if (ft_strncmp(&line[i], "NO ", 3) == 0)
		game->check.no++;
	else if (ft_strncmp(&line[i], "SO ", 3) == 0)
		game->check.so++;
	else if (ft_strncmp(&line[i], "WE ", 3) == 0)
		game->check.we++;
	else if (ft_strncmp(&line[i], "EA ", 3) == 0)
		game->check.ea++;
	else if (ft_strncmp(&line[i], "F ", 2) == 0)
		game->check.f++;
	else if (ft_strncmp(&line[i], "C ", 2) == 0)
		game->check.c++;
	else
		return (1);
	return (0);
}

int	check_mapinfo(t_game *game)
{
	if (!(game->check.no == 1 && game->check.so == 1 \
		&& game->check.ea == 1 && game->check.we == 1 \
		&& game->check.c == 1 && game->check.f == 1))
	{
		write (2, " to much or no map file info\n", 29);
		return (1);
	}
	return (0);
}
