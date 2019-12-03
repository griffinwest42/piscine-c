/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 16:08:15 by grwest            #+#    #+#             */
/*   Updated: 2019/11/09 16:17:42 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	height(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		if (*str == '\n')
			i++;
		str++;
	}
	return (i);
}

int	width(char *str)
{
	int i;

	i = 0;
	while (*str != '\n')
	{
		i++;
		str++;
	}
	return (i);
}
