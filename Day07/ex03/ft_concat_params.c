/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 18:08:24 by grwest            #+#    #+#             */
/*   Updated: 2019/10/31 20:12:24 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src, int argc, int x)
{
	char	*i;

	i = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	if (x < argc - 1)
		*dest = '\n';
	dest++;
	*dest = '\0';
	argc++;
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		x;
	int		i;
	int		y;

	i = 0;
	y = 0;
	while (i < argc)
	{
		x = 0;
		while (argv[x])
		{
			i++;
			x++;
		}
	}
	str = (char*)malloc(sizeof(*str) * (i + 1));
	x = 0;
	while (x < argc - 1)
	{
		str = ft_strcat(str, argv[x + 1], argc, ++y);
		x++;
	}
	return (str);
}
