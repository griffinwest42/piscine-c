/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 18:11:23 by grwest            #+#    #+#             */
/*   Updated: 2019/11/12 18:43:28 by panguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "bsq_headers.h"

char	*copy_memory(void *dest, const void *src, unsigned int size)
{
	unsigned int	i;
	char			*s;
	char			*d;

	s = (char*)src;
	d = (char*)dest;
	i = 0;
	while (i < size)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (dest);
}

char	*expand_memory(char *ptr, unsigned int size)
{
	char	*new;

	new = (char *)malloc(size);
	copy_memory(new, ptr, size / 2);
	free(ptr);
	return (new);
}

int		main(void)
{
	char	c;
	char	*str;
	int		i;
	int		buffer_size;
	int		map;
	int		j;
	int		k;
	char	**split_me;
	int		**int_me;
	int 	height;
	int		len;

	i = 0;
	buffer_size = 1;
	map = open("map", O_RDONLY);
	str = malloc(sizeof(char*));
	while ((read(map, &c, 1)))
	{
		str[i++] = c;
		if (i >= buffer_size)
		{
			buffer_size *= 2;
			str = expand_memory(str, buffer_size);
		}
	}
	printf("Before\n");
	printf("%s", str);
	printf("After\n");
	split_me = new_split(str);
	height = map_height(str);
    len = map_len(str);	
	j = 0;
	while (j < height)
	{
		printf("M: %d: %s\n", j, split_me[j]);
		j++;
	}
	printf("Done printing char**\n");
	printf("%d, %d",height,len);
	
	int_me = int_map(split_me,height,len);
	
	k = 0;
	/*
	while (k < 6)
	{
		printf("Word %d: %d\n", k, *int_me[k]);
		k++;
	}
	*/
	return (0);
}
