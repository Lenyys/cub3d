/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaresov <lmaresov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 11:17:40 by lmaresov          #+#    #+#             */
/*   Updated: 2023/09/02 13:01:28 by lmaresov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);
void	*ft_memcpy(void *dest, const void *src, size_t n);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dst_len;

	if (!dst)
		return (0);
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len >= size)
		return (src_len + size);
	if (src_len + dst_len < size)
		ft_memcpy(dst + dst_len, src, src_len + 1);
	else
	{
		ft_memcpy(dst + dst_len, src, size - dst_len -1);
		dst[size -1] = '\0';
	}
	return (dst_len + src_len);
}
/*
 int    main (void)
 {
    char src[] = "Hello";
    char dest[20] = "Ahoj";
    size_t i;
    //size_t j;
    
    i = ft_strlcat(dest, src, 5);
    printf("delka celkoveho retezce moje: %ld\n", i);
    //j = strlcat(dest, src, 10);
    //printf("delka celkoveho retezce moje: %d\n", j);
    return (0);
     }
     */
