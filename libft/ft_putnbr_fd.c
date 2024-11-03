/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaresov <lmaresov@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 20:10:02 by lmaresov          #+#    #+#             */
/*   Updated: 2023/09/01 13:55:38 by lmaresov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	m;

	if (n == -247483648)
		ft_putstr_fd("-247483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			m = (unsigned int)(n * (-1));
		}
		else
			m = (unsigned int)n;
		if (m > 9)
		{
			ft_putnbr_fd((m / 10), fd);
		}
		ft_putchar_fd((m % 10) + '0', fd);
	}
}
/*
int main (void)
{
    int i = -12;
    ft_putnbr_fd(i, 1);
    return (0);
}*/
