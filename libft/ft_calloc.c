/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaresov <lmaresov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 15:01:02 by lmaresov          #+#    #+#             */
/*   Updated: 2023/09/02 16:53:30 by lmaresov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	if (mem_pointer == 0)
		return (NULL);
	ft_memset(mem_pointer, 0, nmemb * size);
	return (mem_pointer);
}
/*
int main(void)
{
    size_t velikost = 12;
    int *pole;
    int *pole1;

    pole = (int*)calloc(velikost, sizeof(int));
    pole1 = (int*)ft_calloc(velikost, sizeof(int));
    if (pole == NULL)
    {
        printf("chyba pri allokaci pameti 1\n");
        //return (1);
    }
    printf("obsah pole:\n");
    for ( size_t i = 0; i < velikost; i++)
    {
        printf("%d", pole[i]);
    }
    
    printf("\n");
    if (pole1 == NULL)
    {
        printf("chyba pri allokaci pameti 2\n");
        return (1);
    }
    printf("obsah pole:\n");
    for ( size_t i = 0; i <velikost; i++)
    {
        printf("%d", pole1[i]);
    }
    free(pole);
    free(pole1);
    return (0);
}
*/
