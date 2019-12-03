/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 07:01:24 by grwest            #+#    #+#             */
/*   Updated: 2019/10/28 15:24:30 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int counter;
	int	result;
	int negative;

	counter = 0;
	result = 0;
	negative = 0;
	while (str[counter] <= 32 || str[counter] == 43)
		counter++;
	while ((str[counter] >= '0' && str[counter] <= '9') || str[counter] == '-')
	{
		if (counter == 11)
			return (0);
		if (str[counter] == '-')
			negative = 1;
		if (str[counter] >= '0' && str[counter] <= '9')
			result = (result * 10) + (str[counter] - 48);
		counter++;
	}
	if (negative == 1)
		result = result * -1;
	return (result);
}
