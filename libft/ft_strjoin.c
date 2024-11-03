/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaresov <lmaresov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:14:05 by lmaresov          #+#    #+#             */
/*   Updated: 2023/09/02 19:34:15 by lmaresov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		len12;
	int		i;
	int		j;

	i = 0;
	j = 0;
	len12 = ft_strlen(s1) + ft_strlen(s2);
	new_str = (char *)malloc(sizeof (char) * len12 + 1);
	if (!new_str)
		return (NULL);
	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*
int main (void)
{
    const char* s1 = "Ahoj jak se mas?";
    const char* s2 = "Hello";
    char* new_str = ft_strjoin(s1, s2);
    if (new_str != NULL)
    {
        printf("spojeny text: %s", new_str);
        free(new_str);
    }
    return(0);
}
*/
