/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaresov <lmaresov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 13:16:08 by lmaresov          #+#    #+#             */
/*   Updated: 2023/09/03 11:55:50 by lmaresov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c);

static int	ft_iswhitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	j;
	int	number;

	i = 0;
	j = 1;
	number = 0;
	while (ft_iswhitespace(nptr[i]))
		i++;
	if (nptr[i] == '-')
		j *= -1;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (nptr[i] != '\0' && ft_isdigit(nptr[i]))
	{
		number = number * 10 + (nptr[i] - '0');
		i++;
	}
	number *= j;
	return (number);
}
/*int main(void)
{
    char a[] = "-2147483648";
    char b[] = "2147483647";
    char c[] = "0";
    char d[] = "-125";
    char e[] = "248";
    char f[] = "-214748364869";
    char g[] = "24874865892";
    
    printf("zadane cislo je: %d\n",ft_atoi(a));
    printf("zadane cislo je: %d\n",ft_atoi(b));
    printf("zadane cislo je: %d\n",ft_atoi(c));
    printf("zadane cislo je: %d\n",ft_atoi(d));
    printf("zadane cislo je: %d\n",ft_atoi(e));
    printf("zadane cislo je: %d\n",ft_atoi(f));
    printf("zadane cislo je: %d\n",ft_atoi(g));
    printf("\n");
    printf("zadane atoi of: %d\n",atoi(a));
    printf("zadane atoi of: %d\n",atoi(b));
    printf("zadane atoi of: %d\n",atoi(c));
    printf("zadane atoi of: %d\n",atoi(d));
    printf("zadane atoi of: %d\n",atoi(e));
    printf("zadane atoi of: %d\n",atoi(f));
    printf("zadane atoi of: %d\n",atoi(g));
}
*/
