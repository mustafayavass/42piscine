/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myavas <myavas@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:33:47 by myavas            #+#    #+#             */
/*   Updated: 2024/01/31 09:40:42 by myavas           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	b;
	int	rev;

	i = 0;
	b = size - 1;
	while (i < size / 2)
	{
		rev = tab[b];
		tab[b] = tab[i];
		tab[i] = rev;
		i++;
		b--;
	}
}
