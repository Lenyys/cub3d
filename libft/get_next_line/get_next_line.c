/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaresov <lmaresov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:38:08 by lmaresov          #+#    #+#             */
/*   Updated: 2024/01/07 17:59:16 by lmaresov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_join_free(char *buffer, char *buff)
{
	char	*temporary;

	temporary = ft_strjoin(buffer, buff);
	free(buffer);
	return (temporary);
}

char	*ft_res_lines(char	*buffer)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	res = ft_calloc(ft_strlen(buffer) - i + 1, sizeof(char));
	i++;
	j = 0;
	while (buffer[i])
		res[j++] = buffer[i++];
	free(buffer);
	return (res);
}

char	*ft_one_line(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (!buffer[0])
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line = ft_calloc(i + 2, sizeof(char));
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] && buffer[i] == '\n')
		line[i++] = '\n';
	return (line);
}

char	*ft_read_file(int fd, char *buffer_file)
{
	char	*buffer_help;
	int		read_byte;

	if (!buffer_file)
		buffer_file = ft_calloc(1, 1);
	buffer_help = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	read_byte = 1;
	while (read_byte > 0)
	{
		read_byte = read(fd, buffer_help, BUFFER_SIZE);
		if (read_byte == -1)
		{
			free(buffer_help);
			free(buffer_file);
			return (NULL);
		}
		buffer_help[read_byte] = 0;
		buffer_file = ft_join_free(buffer_file, buffer_help);
		if (ft_strchr(buffer_help, '\n'))
			break ;
	}
	free(buffer_help);
	return (buffer_file);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = ft_read_file(fd, buffer);
	if (!buffer)
		return (NULL);
	line = ft_one_line(buffer);
	buffer = ft_res_lines(buffer);
	return (line);
}
