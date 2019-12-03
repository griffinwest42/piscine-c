/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 21:17:55 by panguyen          #+#    #+#             */
/*   Updated: 2019/11/12 02:37:12 by panguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_headers.h"
#include <stdio.h>

static int	map_len(char *str)
{
	static int	len;
	printf("map_len called");
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

static int	map_height(char *str)
{
	static int height;
	printf("map_height called");
	height = 0;
	while (str[height])
		if (str[height] == '\n')
			height++;
	return (height);
}

char	**split_map(char *str)
{	
	int		i;
	int		j;
	int 	k;
	int		len_count;
	
	char	**map;
	printf("split_map called");
	i = 0;
	j = 0;
	len_count = map_len(str);
	if (!(map = (char **)malloc(sizeof(char*) * (map_height(str)))))
		return (0);
	while (str[i] && j < map_height(str))
	{
		i++;
		if (!(map[j] = (char *)malloc(sizeof(char) * (map_len(str) + 1))))
			return (0);
		k = 0;
		while (len_count)
			map[j][k++] = str[i - len_count--];
		map[j++][k] = '\0';
	}
	return (map);
}
