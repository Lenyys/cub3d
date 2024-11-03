/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaresov <lmaresov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:30:27 by lmaresov          #+#    #+#             */
/*   Updated: 2023/08/31 16:57:02 by lmaresov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include<stdio.h>
*/
int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
int main(void)
{
    char    c;
    char    result;
    
    c = 'a';
    result = ft_isalpha(c);
    printf("%d\n", result);

    c = '0';
    result = ft_isalpha(c);
    printf("%d\n", result);

    c = '+';
    result = ft_isalpha(c);
    printf("%d\n", result);
    return (0);
}
*/
