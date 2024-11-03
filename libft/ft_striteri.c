/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaresov <lmaresov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 19:04:44 by lmaresov          #+#    #+#             */
/*   Updated: 2023/09/02 20:07:00 by lmaresov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (s && f)
	{
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}
/*
void zvec_o_jedna(unsigned int index, char *c)
{
    (*c)++;
}

int main (void)
{
    char str[]= "Hello, world!";
    
    printf ("puvodni test: %s\n", str);
    ft_striteri(str, zvec_o_jedna);
    printf("text po pouziti funkce ft_striter: %s\n", str);
    return (0);   
}
*/
