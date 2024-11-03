/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaresov <lmaresov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 19:55:49 by lmaresov          #+#    #+#             */
/*   Updated: 2023/09/02 20:23:24 by lmaresov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	int		i;

	i = 0;
	if (s && f)
	{
		new_str = (char *)malloc(sizeof(*new_str) * (ft_strlen(s)) + 1);
		if (!new_str)
			return (NULL);
		while (s[i] != '\0')
		{
			new_str[i] = f(i, s[i]);
			i++;
		}
		new_str[i] = '\0';
		return (new_str);
	}
	return (0);
}
/*
char uppercase(unsigned int index, char c)
{
    if (c >='a' && c <='z')
        return c - ('a' - 'A');
    return c;
}

int main (void)
{
    const char *text = " Hello world";
    char * result = ft_strmapi(text, uppercase);
    if (result != NULL)
    {
        printf("vysledek: %s\n", result);
        free(result);
    }
    else
        printf("neco se nepovedlo. \n");
    return (0);
}
*/
