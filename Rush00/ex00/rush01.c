/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 11:20:54 by grwest            #+#    #+#             */
/*   Updated: 2019/10/27 21:05:53 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	printline(int x, char beginning, char middle, char end)
{
	int counter;

	counter = 1;
	while (counter <= x)
	{
		if (counter == 1)
			ft_putchar(beginning);
		else if (counter == x)
			ft_putchar(end);
		else
		{
			ft_putchar(middle);
		}
		counter++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int counter;

	counter = 1;
	while (counter <= y)
	{
		if (counter == 1)
		{
			printline(x, '/', '*', '\\');
		}
		else if (counter == y)
		{
			printline(x, '\\', '*', '/');
		}
		else
			printline(x, '*', ' ', '*');
		counter++;
	}
}
