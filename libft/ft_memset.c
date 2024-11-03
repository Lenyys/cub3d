/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaresov <lmaresov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 15:10:54 by lmaresov          #+#    #+#             */
/*   Updated: 2023/09/02 16:48:40 by lmaresov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
#include <string.h>

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
/*
int main(void)
{
    char buffer[20];
    char val = 'A';
    
    ft_memset(buffer, val, sizeof(buffer));
    printf("Obsah pameti po pouziti moji memset:%s\n", buffer);
    printf("\n");
    
    memset(buffer, val, sizeof(buffer));
    printf("Obsah pameti po pouziti ofiko memset:%s \n", buffer);
    return (0);
}
*/
