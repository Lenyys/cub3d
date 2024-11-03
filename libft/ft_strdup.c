/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaresov <lmaresov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 15:01:35 by lmaresov          #+#    #+#             */
/*   Updated: 2023/09/02 17:18:34 by lmaresov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_str;
	int		s_len;
	int		i;

	i = 0;
	s_len = ft_strlen(s);
	new_str = (char *)malloc(sizeof (*new_str) * (s_len + 1));
	if (!new_str)
		return (NULL);
	while (s[i] != '\0')
	{
		new_str[i] = s[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*
int main (void)
{
    char str[] = "Ahoj";
    char *new_str;
    char c;

    new_str = ft_strdup(str);
    for (int i = 0; i < 5; i++)
    {
        c = new_str[i];
        printf("%d\n", c);
    }
    return (0);
}
*/
