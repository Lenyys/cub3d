/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaresov <lmaresov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:40:24 by lmaresov          #+#    #+#             */
/*   Updated: 2024/11/03 11:12:57 by lmaresov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem_pointer;
	size_t	test;

	if (nmemb == 0 || size == 0)
	{
		return (malloc(0));
	}
	test = nmemb * size;
	if (size != test / nmemb)
		return (0);
	mem_pointer = malloc(nmemb * size);
	if (!mem_pointer)
		return (NULL);
	ft_memset(mem_pointer, 0, nmemb * size);
	return (mem_pointer);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		len12;
	int		i;
	int		j;

	i = 0;
	j = 0;
	len12 = ft_strlen(s1) + ft_strlen(s2);
	new_str = (char *)malloc(sizeof (char) * len12 + 1);
	if (!new_str)
		return (NULL);
	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	new_str[i] = '\0';
	return (new_str);
}

// char	*ft_strchr(const char *s, int c)
// {
// 	if (!(c >= 0 && c <= 127))
// 		return ((char *)s);
// 	while (*s)
// 	{
// 		if (*s == c)
// 			return ((char *)s);
// 		s++;
// 	}
// 	if (*s == '\0' && c == '\0')
// 		return ((char *)s);
// 	else
// 		return (0);
// }

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*pmemory;

	i = 0;
	pmemory = (char *)s;
	while (i < n)
	{
		pmemory[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// size_t	ft_strlen(const char *s)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i] != '\0')
// 		i++;
// 	return (i);
// }
