/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaresov <lmaresov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:33:54 by lmaresov          #+#    #+#             */
/*   Updated: 2023/09/01 14:15:04 by lmaresov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
/*
int main(void)
{
    char    c;
    char    result;
    
    c = 'a';
    result = ft_toupper(c);
    printf("%d\n", result);

    c = '0';
    result = ft_toupper(c);
    printf("%d\n", result);

    c = '+';
    result = ft_toupper(c);
    printf("%d\n", result);
    
    c = 'Z';
    result = ft_toupper(c);
    printf("%d\n", result);
    
    c = 'l';
    result = ft_toupper(c);
    printf("%d\n", result);
    return (0);
}
*/
