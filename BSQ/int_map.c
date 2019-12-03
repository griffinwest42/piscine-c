/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 23:46:42 by panguyen          #+#    #+#             */
/*   Updated: 2019/11/12 03:12:27 by panguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_headers.h"

int		**int_map(char **map, int height, int len)
{
	int		r;
	int		c;
	int		**t;

	r = 1;
	if (!(t = (int**)malloc(sizeof(int*) * (height + 1))))
		return (0);
	while (r < height)
	{
		c = 0;
		if (!(t[r] = (int *)malloc(sizeof(int) * (len + 1))))
			return (0);
		while (c < len)
		{
		   if (map[r][c] == 'o')
		   {
			   if (r == 1 && c == 0)
				   t[r][c] =  1;
			   if (r == 1 && c > 0)
				   t[r][c] = t[r-1][c] + 1;
			   if (r > 1 && c == 0)
				   t[r][c] = t[r][c-1] + 1;
		   }
		   else
		   {
			   if (r == 1 && c == 0)
				   t[r][c] = 0;
			   if (r == 1 && c > 0)
				   t[r][c] = t[r-1][c];
			   if (r > 1 && c == 0)
				   t[r][c] = t[r][c-1];
				t[r][c] = t[r][c-1] + t[r-1][c] - t[r-1][c-1];
		   }
		   c++;
		}
		r++;
	}
	return (t);
}
