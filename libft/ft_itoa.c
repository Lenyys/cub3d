/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaresov <lmaresov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 09:29:04 by lmaresov          #+#    #+#             */
/*   Updated: 2023/09/03 11:55:12 by lmaresov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_int(int n)
{
	unsigned int	j;
	int				i;

	i = 0;
	j = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
		j = n * (-1);
	else
		j = n;
	while (j > 0)
	{
		j = j / 10;
		i++;
	}
	if (n < 0)
		return (i + 1);
	else
		return (i);
}

char	*ft_itoa(int n)
{
	char			*str_number;
	int				i;
	unsigned int	j;

	i = char_int(n);
	str_number = (char *)malloc(sizeof (*str_number) * (i + 1));
	if (!str_number)
		return (NULL);
	str_number[i] = '\0';
	i--;
	if (n < 0)
		j = n * (-1);
	else
		j = n;
	while (j > 0)
	{
		str_number[i] = (j % 10 + '0');
		j = j / 10;
		i--;
	}
	if (n == 0)
		str_number[i] = '0';
	if (n < 0)
		str_number[i] = '-';
	return (str_number);
}
/*
int main(void)
{
    int number;
    int number1;
    int number2;
    int number3;
    int number4;
    char *str;
    char *str1;
    char *str2;
    char *str3;
    char *str4;
    
    number = 123456;
    number1 = 0;
    number2 = -12345;
    number3 = 2147483647;
    number4 = -2147483648;
    str = (char *)ft_itoa(number);
    str1 = (char *)ft_itoa(number1);
    str2 = (char *)ft_itoa(number2);
    str3 = (char *)ft_itoa(number3);
    str4 = (char *)ft_itoa(number4);
    
    printf("prevedene cislo: %s\n", str);
    printf("prevedene cislo: %s\n", str1);
    printf("prevedene cislo: %s\n", str2);
    printf("prevedene cislo: %s\n", str3);
    printf("prevedene cislo: %s\n", str4);
    return (0);
}
*/
