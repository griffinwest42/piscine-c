/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_headers.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 16:07:09 by panguyen          #+#    #+#             */
/*   Updated: 2019/11/12 02:51:07 by panguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BSQ_HEADERS_H
#define	BSQ_HEADERS_H

#include <stdlib.h>
#include <unistd.h>

char		*copy_memory(void *dest, const void *src, unsigned int size);
char		*expand_memory(char *ptr, unsigned int size);
int			**int_map(char **map, int height, int len);
void		find_bsq(int **map);
char		**new_split(char *str);
int			ft_atoi(char *str);
int			map_height(char *str);
int			map_len(char *str);
#endif
