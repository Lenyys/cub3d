/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaresov <lmaresov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:57:46 by lmaresov          #+#    #+#             */
/*   Updated: 2023/08/31 17:30:58 by lmaresov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>
*/
int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/*
int main(void)
{
    char    c;
    char    result;
    
    c = 'a';
    result = t_isdigit(c);
    printf("%d\n", result);

    c = '0';
    result = t_isdigit(c);
    printf("%d\n", result);

    c = '+';
    result = t_isdigit(c);
    printf("%d\n", result);
    return (0);
}
*/
