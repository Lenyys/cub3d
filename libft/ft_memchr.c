/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaresov <lmaresov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 19:45:37 by lmaresov          #+#    #+#             */
/*   Updated: 2023/09/01 20:02:35 by lmaresov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	c1;
	size_t			i;

	s1 = (unsigned char *)s;
	c1 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*s1 == c1)
			return (s1);
		s1++;
		i++;
	}
	return (0);
}
/*
int main (void)
{
    char str[] = "Hello, world!";
    char *p;

    p = ft_memchr(str, 'l', 5);
    printf("ponter na dany znak: %s", p);
    return(0);
}
*/
