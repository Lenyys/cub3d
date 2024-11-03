/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaresov <lmaresov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 15:25:26 by lmaresov          #+#    #+#             */
/*   Updated: 2023/09/02 17:31:00 by lmaresov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*

#include <stdio.h>
*/
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ps;

	i = 0;
	ps = (char *)s;
	while (i < n)
	{
		ps[i] = '\0';
		i++;
	}
}
/*
int main (void)
{
    char buffer[20];
    ft_bzero(buffer, sizeof(buffer));
    printf("Obsah pameti po pouziti moji bzero:%s \n a", buffer);
    return (0);  
}
*/
