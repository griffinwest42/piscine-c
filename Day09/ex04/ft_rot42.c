/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 09:16:47 by grwest            #+#    #+#             */
/*   Updated: 2019/11/01 09:39:59 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int counter;

	counter = 0;
	while (str[counter])
	{
		if (str[counter] >= 'A' && str[counter] <= 'Z')
			str[counter] = ((str[counter] - 65 + 42) % 26) + 65;
		if (str[counter] >= 'a' && str[counter] <= 'z')
			str[counter] = ((str[counter] - 97 + 42) % 26) + 97;
		counter++;
	}
	return (str);
}
