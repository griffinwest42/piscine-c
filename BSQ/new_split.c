/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_split.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 22:53:56 by panguyen          #+#    #+#             */
/*   Updated: 2019/11/12 18:58:01 by panguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_headers.h"

int	map_height(char *str)
{
	int		height;
	height = 0;
	while (*str)
	{
		if (*str == '\n')
			++str;
		else
		{
			++height;
			while (*str && *str != '\n')
				++str;
		}
	}
	return (height);
}

int	map_len(char *str)
{
	int len;
	len = 0;
	while (*str != '\n')
		str++;
	str++;
	while (*str != '\n')
	{
		len++;
		str++;
	}
	return (len);
}

char	**new_split(char *str)
{
	int		i;
	int		j;
	int		k;
	int		len;
	char	**map;

	i = 0;
	j = 0;
	len = 0;
	if (!(map = (char **)malloc(sizeof(char*) * map_height(str))))
		return (0);
	while (str[i] && j < map_height(str))
	{
		while(str[i] && str[i] == '\n')
			i++;
		while (str[i] && str[i] != '\n')
		{
			len++;
			i++;
		}
		if (!(map[j] = (char *)malloc((sizeof(char) * len) + 1)))
			return (0);
		k = 0;
		while (len)
			map[j][k++] = str[i - len--];
		map[j++][k] = '\0';
	}
	return (map);
}
