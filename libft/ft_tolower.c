/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaresov <lmaresov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:34:06 by lmaresov          #+#    #+#             */
/*   Updated: 2023/09/01 14:14:47 by lmaresov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>
*/
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
/*
int main(void)
{
    char    c;
    char    result;
    
    c = 'A';
    result = ft_tolower(c);
    printf("%d\n", result);

    c = '0';
    result = ft_tolower(c);
    printf("%d\n", result);

    c = '+';
    result = ft_tolower(c);
    printf("%d\n", result);
    
    c = 'Z';
    result = ft_tolower(c);
    printf("%d\n", result);
    
    c = 'l';
    result = ft_tolower(c);
    printf("%d\n", result);
    return (0);
}
*/
