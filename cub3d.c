/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaresov <lmaresov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:11:29 by rnovotny          #+#    #+#             */
/*   Updated: 2024/11/09 11:11:15 by lmaresov         ###   ########.fr       */
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
	game->mapinfo.map_info = 0;
	game->mapinfo.map_started = 0;
	game->check.c = 0;
	game->check.ea = 0;
	game->check.f = 0;
	game->check.no = 0;
	game->check.so = 0;
	game->check.we = 0;
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
		
		if (check_arg(argv[1], &game))
			return (1);
		printf ("map height %d\n",game.mapinfo.height);
		printf ("map width %d\n", game.mapinfo.width);
		if (map_to_game(&game, argv[1]))
			return (1);
		check_walls(&game);
		
			
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
		int j = 0;
		printf("mapa na konci:\n");
		while(game.map[j])
		{
			printf("%s\n", game.map[j]);
			j++;
		}
		printf ("path west: %s\n", game.mapinfo.stats_path[WEST]);
		printf ("path east: %s\n", game.mapinfo.stats_path[EAST]);
		printf ("path south: %s\n", game.mapinfo.stats_path[SOUTH]);
		printf ("path north: %s\n", game.mapinfo.stats_path[NORTH]);
		printf ("ceil color: %s\n", game.mapinfo.c_c);
		printf ("floor color: %s\n", game.mapinfo.f_c);
		// printf ("path west len: %zu\n", ft_strlen(game.mapinfo.stats_path[WEST]));
		// printf ("path east len: %zu\n", ft_strlen(game.mapinfo.stats_path[EAST]));
		// printf ("path south len: %zu\n", ft_strlen(game.mapinfo.stats_path[SOUTH]));
		// printf ("path north len: %zu\n", ft_strlen(game.mapinfo.stats_path[NORTH]));
		free_all(&game);
	}
	else
	{
		write(2, "Usage: ./cub3d map_file\n", 24);
	}
	return (0);
}