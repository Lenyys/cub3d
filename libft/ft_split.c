/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaresov <lmaresov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 09:28:50 by lmaresov          #+#    #+#             */
/*   Updated: 2023/09/03 15:08:30 by lmaresov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	num_of_words;
	int	i;
	int	is_in_word;

	i = 0;
	num_of_words = 0;
	is_in_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			i++;
			is_in_word = 0;
		}
		else
		{
			if (is_in_word == 0)
			{
				is_in_word = 1;
				num_of_words++;
			}
			i++;
		}
	}
	return (num_of_words);
}

static int	ft_word_len(const char *s, char c, int i)
{
	int	j;
	int	i1;

	j = 1;
	i1 = i;
	while (s[i1] != c && s[i1] != '\0')
	{
		i1++;
		j++;
	}
	return (--j);
}

static int	get_i(const char *s, char c, int index1)
{
	int	i;

	i = 0;
	while (index1 > -1)
	{
		while (s[i] == c)
			i++;
		index1--;
		while (s[i] != c && index1 > -1)
			i++;
	}
	return (i);
}

static char	*get_one_word(const char *s, char c, int index1)
{
	int		i;
	int		j;
	char	*one_word;
	int		wordlen;

	j = 0;
	i = get_i(s, c, index1);
	wordlen = ft_word_len(s, c, i);
	one_word = (char *)malloc(sizeof (char) * (wordlen + 1));
	if (!one_word)
		return (NULL);
	while (s[i] != c && s[i] != '\0')
	{
		one_word[j] = s[i];
		i++;
		j++;
	}
	one_word[j] = '\0';
	return (one_word);
}

char	**ft_split(char const *s, char c)
{
	int		num_words;
	char	**array_sw;
	int		index;

	if (s == NULL)
		return (NULL);
	num_words = count_words(s, c);
	index = 0;
	array_sw = (char **)malloc(sizeof (char *) * (num_words + 1) + 1);
	if (!array_sw)
		return (NULL);
	while (num_words > 0)
	{
		array_sw[index] = (char *)get_one_word(s, c, index);
		if (array_sw == NULL)
			return (NULL);
		num_words--;
		index++;
	}
	array_sw[index] = (char *) '\0';
	return (array_sw);
}
/*
int main (void)
{
    char str[] = "Ahoj jak se mas , a jak se dari?";   
    char c = ' ';
    char **array = ft_split(str, c);
    if (array != NULL){
    for ( int i = 0; array[i] != NULL; i++)
    {
        printf("Slovo %d: %s \n", i+1, array[i]);
    }
    for (int i=0; array[i] != NULL; i++)
    {
        free(array[i]);
    }
    free(array);
    }
    else
    {
        printf("chyba\n");
    }
    return (0);
}
*/
