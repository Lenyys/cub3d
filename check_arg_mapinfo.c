/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg_mapinfo.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaresov <lmaresov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 13:11:36 by lmaresov          #+#    #+#             */
/*   Updated: 2024/11/03 13:30:03 by lmaresov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	check_map_char(char *line, t_game *game)
{
	int	i;

	i = 0;
	while (line[i] && line[i] == ' ')
		i++;
	if (line[i] && ft_strchr("01NSEW", line[i]))
	{
		game->mapinfo.map_started = 1;
		return (1);
	}
	return (0);
}

void	count_map_char(t_game *game, char letter)
{
	if (ft_strncmp(&letter, "N", 1) == 0)
		game->check.n++;
	else if (ft_strncmp(&letter, "S", 1) == 0)
		game->check.s++;
	else if (ft_strncmp(&letter, "E", 1) == 0)
		game->check.e++;
	else if (ft_strncmp(&letter, "W", 1) == 0)
		game->check.w++;
}

int	mapinfo_checker(char *line, t_game *game)
{
	int	i;

	i = 0;
	while (line[i] && line[i] != '\n')
	{
		if (!ft_strchr("01NSEW ", line[i]))
		{
			write(2, "invalid character in map\n", 25);
			return (1);
		}
		if (ft_strchr("NSEW", line[i]))
			count_map_char(game, line[i]);
		i++;
	}
	return (0);
}

int	check_map(t_game *game)
{
	if (check_mapinfo(game))
		return (1);
	if (!((game->check.n == 1 && game->check.s == 0 \
		&& game->check.e == 0 && game->check.w == 0) \
		|| (game->check.n == 0 && game->check.s == 1 \
		&& game->check.e == 0 && game->check.w == 0) \
		|| (game->check.n == 0 && game->check.s == 0 \
		&& game->check.e == 1 && game->check.w == 0) \
		|| (game->check.n == 0 && game->check.s == 0 \
		&& game->check.e == 0 && game->check.w == 1)))
	{
		write (2, "to much or no player position in map\n", 38);
		return (1);
	}
	return (0);
}
