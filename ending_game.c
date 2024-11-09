/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ending_game.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaresov <lmaresov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 11:27:13 by lmaresov          #+#    #+#             */
/*   Updated: 2024/11/09 11:28:41 by lmaresov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	free_all (t_game *game)
{
	int	i;

	i = 0;
	if (game->mapinfo.c_c)
		free(game->mapinfo.c_c);
	if (game->mapinfo.f_c)
		free(game->mapinfo.f_c);
	while (i < 4)
	{
		if (game->mapinfo.stats_path[i])
			free(game->mapinfo.stats_path[i]);
		i++;
	}
	i = 0;
	if (game->map)
	{
		while (game->map[i])
		{
			free(game->map[i]);
			i++;
		}
		free(game->map);
	}
}	

void	close_exit(t_game *game, char *message)
{
	write(2, message, ft_strlen(message));
	free_all(game);
	exit(1);
}
