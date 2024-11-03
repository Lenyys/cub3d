/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaresov <lmaresov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 16:06:58 by lmaresov          #+#    #+#             */
/*   Updated: 2023/09/01 16:51:58 by lmaresov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	if (dest > src)
	{
		i = (int)n -1;
		while (i >= 0)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
/*
int main (void)
{
    char src[] = "Hello, world!";
    char dest[20];

    memmove(dest, src, sizeof(src));
    printf("obsah dest z ofiko memmove: %s\n", dest);
    

    ft_memmove(dest, src, sizeof(src));
    printf("obsah dest z moji memmove: %s\n", dest);
    return(0);
}
*/
