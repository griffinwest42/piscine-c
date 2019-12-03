/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/26 14:26:39 by grwest            #+#    #+#             */
/*   Updated: 2019/10/27 15:45:53 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if (nb == 0 && power != 0)
		return (0);
	if (power < 0)
		return (0);
	if (power == 0 || nb == 1)
		return (1);
	while (power > 0)
	{
		result = nb * result;
		power--;
	}
	return (result);
}
