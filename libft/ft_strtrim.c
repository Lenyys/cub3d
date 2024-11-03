/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaresov <lmaresov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:35:55 by lmaresov          #+#    #+#             */
/*   Updated: 2023/09/03 11:57:18 by lmaresov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	start_index(char const *s1, char const *set, int lenset)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		if (j == lenset)
			return (i);
		i++;
	}
	return (0);
}

static int	end_index(char const *s1, char const *set, int lenset, int lens1)
{
	int	j;

	while (lens1 > 0)
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[lens1 - 1] == set[j])
				break ;
			j++;
		}
		if (j == lenset)
			return (lens1);
		lens1--;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimed_str;
	int		start;
	int		end;
	int		i;

	i = 0;
	trimed_str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!trimed_str)
		return (NULL);
	start = start_index(s1, set, ft_strlen(set));
	end = end_index(s1, set, ft_strlen(set), ft_strlen(s1));
	while (start < end)
		trimed_str[i++] = s1[start++];
	trimed_str[i] = '\0';
	return (trimed_str);
}
/*
int main (void)
{
    const char* s1 = "ahoj jak se mas?";
    const char* s2 = "as?";
    char* new_str = ft_strtrim(s1, s2);
    if (new_str != NULL)
    {
        printf("orezany text: %s", new_str);
        free(new_str);
    }
    return(0);
}
*/
