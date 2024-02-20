/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myavas <myavas@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 09:30:27 by myavas            #+#    #+#             */
/*   Updated: 2024/02/11 09:30:29 by myavas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_print ('-');
		ft_print ('2');
		ft_print ('1');
		write (1, "47483648", 8);
	}
	else if (nb < 0)
	{
		ft_print ('-');
		ft_putnbr (-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
	else if (nb <= 9)
	{
		ft_print(nb + 48);
	}
}
