/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaresov <lmaresov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:11:29 by rnovotny          #+#    #+#             */
/*   Updated: 2024/11/03 12:15:32 by lmaresov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	init_game(t_game *game)
{
	// game->mlx = mlx_init();
	// game->win = mlx_new_window(game->mlx, game->win_width, game->win_height, "cub3D");
	// game->player.dir = NORTH;
	// game->player.pos_x = 0;
	// game->player.pos_y = 0;
	// game->player.dir_x = 0;
	// game->player.dir_y = 0;
	// game->player.plane_x = 0;
	// game->player.plane_y = 0;
	// game->player.has_moved = 0;
	// game->player.move_x = 0;
	// game->player.move_y = 0;
	// game->player.rotate = 0;

	game->mapinfo.height = 0;
	game->mapinfo.width = 0;
	game->check.c = 0;
	game->check.ea = 0;
	game->check.f = 0;
	game->check.no = 0;
	game->check.so = 0;
	game->check.we = 0;
	game->mapinfo.map_started = 0;
	game->check.n = 0;
	game->check.s = 0;
	game->check.e = 0;
	game->check.w = 0;
}

int	main(int argc, char **argv)
{
	if (argv[1] && argc == 2)
	{
		t_game	game;

		init_game(&game);
		if (check_arg(argv[1], &game) == 0)
			return (1);
		// game.mapinfo.fd = open(argv[1], O_RDONLY);
		// if (game.mapinfo.fd < 0)
		// {
		// 	write("2, Invalid map\n", 15);
		// 	return (1);
		// }
		// parse_map(&game);
		// render(&game);
		// listen_for_input(&game);
		// clean_exit(&game, 0);
	}
	else
	{
		write(2, "Usage: ./cub3d map_file\n", 24);
	}
	return (0);
}