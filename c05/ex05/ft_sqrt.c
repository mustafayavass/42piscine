/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myavas <myavas@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:02:13 by myavas            #+#    #+#             */
/*   Updated: 2024/02/14 16:02:14 by myavas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	sqrt;

	sqrt = 2;
	if (nb <= 0)
	{
		return (0);
	}
	else if (nb == 1)
	{
		return (1);
	}
	else
	{
		while (sqrt * sqrt <= nb && nb < 46341)
		{
			if (sqrt * sqrt == nb)
			{
				return (sqrt);
			}
			sqrt++;
		}
	}
	return (0);
}
