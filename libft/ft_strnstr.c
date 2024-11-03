/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaresov <lmaresov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 20:24:00 by lmaresov          #+#    #+#             */
/*   Updated: 2023/09/01 21:13:59 by lmaresov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	char	*big1;
	size_t	little_len;

	big1 = (char *)big;
	i = 0;
	little_len = ft_strlen(little);
	if (little[i] == '\0')
		return (big1);
	if (!len)
		return (0);
	while (*big1 && ((len - little_len) >= i))
	{
		if (*big1 == *little)
		{
			if (ft_strncmp(little, big1, little_len) == 0)
				return (big1);
		}
		i++;
		big1++;
	}
	return (NULL);
}
/*
int main (void)
{
	char haystack[30] = "aaabcabcd";
	//char needle[10] = "aabc";

	printf("%s",ft_strnstr(haystack, "aaabc", 5));
	printf("%s",ft_strnstr(haystack, "abcd", 9));
	printf("%s",ft_strnstr(haystack, "a", 1));
	return (0);
}
*/
/*
int main (void)
{
    char *p;
    //char *p1;
    char strb[]= "aAHhAHOJoj";
    char strl1[] = "";
    
    p = ft_strnstr(strb, strl1, 10);
    printf("moje strnstr: %s\n", p);
    char strl2[] = "x";
    p = ft_strnstr(strb, strl2, 10);
    printf("moje strnstr: %s\n", p);
    char strl3[] = "o";
    p = ft_strnstr(strb, strl3, 10);
    printf("moje strnstr: %s\n", p);
    char strl4[] = "o";
    p = ft_strnstr(strb, strl4, 5);
    printf("moje strnstr: %s\n", p);
    //p1 = strnstr(strb, strl, 5);
    //printf("ofiko strnstr: %s\n", p1);
    return (0);
}
*/
