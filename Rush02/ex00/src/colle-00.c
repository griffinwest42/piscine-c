/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-00.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 15:26:27 by grwest            #+#    #+#             */
/*   Updated: 2019/11/09 15:26:52 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int		result;
	int		negative;

	negative = 1;
	result = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
			*str == '\v' || *str == '\f' || *str == '\r'))
		str++;
	if (*str == '-')
		negative = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && *str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * negative);
}
void	printline(int x, char beginning, char middle, char end)
{
	int counter;

	counter = 1;
	while (counter <= x)
	{
		if (counter == 1)
			write(1, &beginning, 1);
		else if (counter > 1 && counter < x)
			write(1, &middle, 1);
		else
			write(1, &end, 1);
		counter++;
	}
	write(1, "\n", 1);
}

void	rush(int x, int y)
{
	int counter;

	counter = 1;
	while (counter <= y)
	{
		if (counter == 1)
			printline(x, 'o', '-', 'o');
		else if (counter > 1 && counter < y)
			printline(x, '|', ' ', '|');
		else
			printline(x, 'o', '-', 'o');
		counter++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3 && ft_atoi(argv[1]) > 0 && ft_atoi(argv[2]) > 0)
	{
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	}
	return (0);
}
