/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 19:16:01 by grwest            #+#    #+#             */
/*   Updated: 2019/10/29 19:19:22 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	while ((*str >= 'A' && *str <= 'Z'))
		str++;
	if (!*str)
		return (1);
	return (0);
}
