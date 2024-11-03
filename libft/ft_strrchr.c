/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaresov <lmaresov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 19:14:33 by lmaresov          #+#    #+#             */
/*   Updated: 2023/09/01 14:57:19 by lmaresov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_strrchr(const char *s, int c)
{
	char	*s1;
	int		s_len;

	if (!ft_isascii(c))
		return ((char *)s);
	s_len = ft_strlen(s);
	s1 = (char *)s + s_len - 1;
	if (c == '\0')
	{
		return (++s1);
	}
	while (s_len != 0)
	{
		if (*s1 == c)
			return (s1);
		s_len--;
		s1--;
	}
	return (NULL);
}
/*
int main(void)
{
    char	to_find = '\0';
	const char	str[] = "aAHhAHOJoj";
	
	printf("%s", ft_strrchr(str, to_find )); 
    return (0);
}*/
