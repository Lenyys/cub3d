/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaresov <lmaresov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:18:45 by lmaresov          #+#    #+#             */
/*   Updated: 2023/08/31 18:21:17 by lmaresov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>
*/
int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}
/*
int main(void)
{
    char    c;
    char    result;
    
    c = 'a';
    result = ft_isprint(c);
    printf("%d\n", result);

    c = '0';
    result = ft_isprint(c);
    printf("%d\n", result);

    c = '+';
    result = ft_isprint(c);
    printf("%d\n", result);

     c = ' ';
    result = ft_isprint(c);
    printf("%d\n", result);
    
    return (0);
}
*/
