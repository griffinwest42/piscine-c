/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 16:31:10 by grwest            #+#    #+#             */
/*   Updated: 2019/10/31 17:27:48 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	*str;
	int i;
	int len;

	i = 0;
	len = max - min;
	if (len <= 0)
	{
		*range = (0);
		return (0);
	}
	str = (int*)malloc(sizeof(*str) * (len + 1));
	while (i < len)
	{
		str[i] = min + i;
		i++;
	}
	str[i] = '\0';
	*range = str;
	return (i);
}
