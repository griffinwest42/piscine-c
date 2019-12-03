/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 02:13:56 by grwest            #+#    #+#             */
/*   Updated: 2019/10/26 15:18:20 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int count;

	count = 1;
	if (nb > 12)
		return (0);
	if (nb < 0)
		return (0);
	while (nb >= 1)
	{
		count = count * nb;
		nb--;
	}
	return (count);
}
