/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_to_game.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaresov <lmaresov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:11:48 by lmaresov          #+#    #+#             */
/*   Updated: 2024/11/09 11:10:29 by lmaresov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void free_stats_splited(char **stats_splited)
{
	int i;
	
	i = 0;
	while (stats_splited[i])
	{
		free(stats_splited[i]);
		i++;
	}	
	free(stats_splited);
}

void	get_stats_paths(char *line, t_game *game)
{
	char	**stats_splited;
	int		i;
	
	i = 0;
	stats_splited = ft_split(line, ' ');
	while (stats_splited[i])
	{
		// printf ("stats[%d]: %s\n",i, stats_splited[i]);
		// printf ("i = %d\n", i);
		i++;
	}
	if (--i > 2)
	{
		// printf ("i znovu = %d\n", i);
		// write (2, "wrong informations in map statuses\n", 35);
		free_stats_splited(stats_splited);
		exit (1);
	}
	if (stats_splited[2] && ft_strncmp(stats_splited[2],"\n", 1) == 0)
		free(stats_splited[2]);
	int path_len = ft_strlen(stats_splited[1]);
	// printf ("path_len %d\n", path_len);
	if (stats_splited[1][path_len - 1] == '\n')
		stats_splited[1][path_len - 1] = '\0' ;
	// path_len = ft_strlen(stats_splited[1]);
	// printf ("path_len %d\n", path_len);
	if (ft_strncmp("NO", stats_splited[0], 2) == 0)
		game->mapinfo.stats_path[NORTH] = stats_splited[1];
	else if (ft_strncmp("SO", stats_splited[0], 2) == 0)
		game->mapinfo.stats_path[SOUTH] = stats_splited[1];
	else if (ft_strncmp("EA", stats_splited[0], 2) == 0)
		game->mapinfo.stats_path[EAST] = stats_splited[1];
	else if (ft_strncmp("WE", stats_splited[0], 2) == 0)
		game->mapinfo.stats_path[WEST] = stats_splited[1];
	else if (ft_strncmp("C", stats_splited[0], 1) == 0)
		game->mapinfo.c_c = stats_splited[1];
	else if (ft_strncmp("F", stats_splited[0], 1) == 0)
		game->mapinfo.f_c = stats_splited[1];
	free (stats_splited[0]);
	free (stats_splited);
	game->mapinfo.map_info++;
}

int	get_stats(t_game *game, int fd)
{
	char	*line;

	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			return (1);
		// write (1, line, ft_strlen(line));
		if (empty_line(line))
			continue ;
		get_stats_paths(line, game);
		// printf ("map info %d\n", game->mapinfo.map_info);
		if (game->mapinfo.map_info == 6)
			break ;
		free(line);
	}
	if (line)
		free(line);	
	return (0);
}

void	map_field_to_game(t_game *game, int fd, char **map)
{
	char	*line;
	int		i;
	int		j;
	char	*map_line;

	i = 0;
	// printf("map w:%d\n", game->mapinfo.width);
	// printf("map_h:%d\n", game->mapinfo.height);
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		if (empty_line(line))
			continue;
		map_line = malloc(sizeof(char) * (game->mapinfo.width + 2));
		ft_strlcpy(map_line, line, ft_strlen(line) + 1);
		j = ft_strlen(line);
		
		// printf ("j delka line:%d\n", j);
		// printf ("    line: %s\n", line);
		if (map_line[j - 1] == '\n')
			j--;
		while (j < game->mapinfo.width)
		{
			map_line[j] = ' ';
			j++;
		}
		map_line[j] = '\0';
		// int len = ft_strlen(map_line);
		// printf ("map_line: %s\n", map_line);
		// printf("len : %d\n", len);
		
		map[i] = map_line;
		i++;
		free(line);
	}
	map[i] = NULL;
	game->map = map;
}

int	map_to_game(t_game *game, char *arg)
{
	char	**map;
	int		fd;

	map = game->map;
	fd = open(arg, O_RDONLY);
	if (fd < 0)
	{
		printf("Error\nCould not open map\n");
		return (1);
	}
	if (get_stats(game, fd))
		return (1);
	
	map = malloc(sizeof(char *) * (game->mapinfo.height + 1));
	map_field_to_game(game, fd, map);
	close(fd);
	return (0);
}
