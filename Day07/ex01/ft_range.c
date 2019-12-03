/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 15:46:39 by grwest            #+#    #+#             */
/*   Updated: 2019/10/31 17:26:48 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*str;
	int i;
	int len;

	if (min >= max)
		return (0);
	i = 0;
	len = max - min;
	str = (int*)malloc(sizeof(*str) * len);
	while (i < len)
	{
		str[i] = min + i;
		i++;
	}
	str[i] = '\0';
	return (str);
}
