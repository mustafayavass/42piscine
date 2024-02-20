/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myavas <myavas@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:24:06 by myavas            #+#    #+#             */
/*   Updated: 2024/02/14 17:24:08 by myavas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
	{
		return (0);
	}
	else
	{
		while (i <= (nb / 2))
		{
			if (nb % i != 0)
			{
				i++;
			}
			else
			{
				return (0);
			}
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	while (ft_is_prime(nb) == 0)
	{
		if (ft_is_prime(i) == 1)
		{
			return (i);
		}
		i++;
	}
	return (nb);
}
