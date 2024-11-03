/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaresov <lmaresov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 20:04:05 by lmaresov          #+#    #+#             */
/*   Updated: 2023/09/01 20:20:34 by lmaresov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*src1;
	unsigned char	*src2;
	size_t			i;

	i = 0;
	src1 = (unsigned char *)s1;
	src2 = (unsigned char *)s2;
	while (i < n)
	{
		if (src1[i] != src2[i])
			return (src1[i] - src2[i]);
		i++;
	}
	return (0);
}
/*
int main (void)
{
    char str1[] = "Hello world!";
    char str2[] = "Hello world!";

    printf("rozdil moje: %d\n", ft_memcmp(str1, str2, 5));
    printf("rozdil ofiko: %d\n", ft_memcmp(str1, str2, 5));
    return(0);
}
*/
