/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaresov <lmaresov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:08:04 by rnovotny          #+#    #+#             */
/*   Updated: 2024/11/03 13:36:04 by lmaresov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <stdio.h>
# include <fcntl.h>
# include "libft/libft.h"

# define EAST 0
# define NORTH 1
# define WEST 2
# define SOUTH 3

typedef struct s_mapinfo
{
	int			fd;
	int			line_count;
	char		*path;
	char		**file;
	int			height;
	int			width;
	int			map_started;
	int			index_end_of_map;
}	t_mapinfo;

typedef struct s_player
{
	char	dir;
	double	pos_x;
	double	pos_y;
	double	dir_x;
	double	dir_y;
	double	plane_x;
	double	plane_y;
	int		has_moved;
	int		move_x;
	int		move_y;
	int		rotate;
}	t_player;

typedef struct s_check
{
	int	no;
	int	so;
	int	ea;
	int	we;
	int	c;
	int	f;
	int	n;
	int	s;
	int	e;
	int	w;
}	t_check;

typedef struct s_game
{
	void		*mlx;
	void		*win;
	int			win_height;
	int			win_width;
	t_mapinfo	mapinfo;
	char		**map;
	t_player	player;
	t_check		check;
	// t_ray		ray;
	// int			**texture_pixels;
	// int			**textures;
	// t_texinfo	texinfo;
}	t_game;

//check_arg_mapinfo.c
int		check_map_char(char *line, t_game *game);
void	count_map_char(t_game *game, char letter);
int		mapinfo_checker(char *line, t_game *game);
int		check_map(t_game *game);

//check_arg_stats.c
int		check_stats(char *line, t_game *game);
int		check_mapinfo(t_game *game);

//check_arg.c
int		check_extension(char *argv);
int		check_map_file_helper(int fd, char *line, t_game *game);
int		check_map_file(int fd, t_game *game);
int		check_arg(char *argv, t_game *game);

//cub3d.c

//init.c

//map_info_utils.c
void	map_width(char *line, t_game *game);

#endif
