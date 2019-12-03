/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 09:41:24 by grwest            #+#    #+#             */
/*   Updated: 2019/11/01 09:46:50 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if ((i > j && i < k) || (i > k && i < j))
		return (i);
	else if ((j > i && j < k) || (j > k && k < i))
		return (j);
	else if ((k > i && k < j) || (k > j && k < i))
		return (k);
	else
		return (0);
}