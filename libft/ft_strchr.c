/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaresov <lmaresov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:14:17 by lmaresov          #+#    #+#             */
/*   Updated: 2023/09/01 14:56:36 by lmaresov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>
*/
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (!ft_isascii(c))
		return ((char *)s);
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (*s == '\0' && c == '\0')
		return ((char *)s);
	else
		return (0);
}
/*
int main(void)
{
    char	to_find = 'x';
	const char	str[] = "aAHhAHOJoj";
	
	printf("%s", ft_strchr(str, to_find )); 
    return (0);
}*/
