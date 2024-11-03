/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaresov <lmaresov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:01:43 by lmaresov          #+#    #+#             */
/*   Updated: 2023/08/31 17:30:38 by lmaresov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>
*/
int	ft_isalnum(int c)
{
	if (((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		|| (c >= 48 && c <= 57))
		return (1);
	return (0);
}
/*
int main(void)
{
    char    c;
    char    result;
    
    c = 'a';
    result = ft_isalnum(c);
    printf("%d\n", result);

    c = '0';
    result = ft_isalnum(c);
    printf("%d\n", result);

    c = '+';
    result = ft_isalnum(c);
    printf("%d\n", result);
    return (0);
}
*/
