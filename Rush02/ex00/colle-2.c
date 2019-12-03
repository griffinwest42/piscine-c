/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-2.c                                          :+:      :+:    :+:   */
/*                                                     +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 15:57:51 by grwest            #+#    #+#             */
/*   Updated: 2019/11/10 22:49:12 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		return ;
	}
	else
	{
		if (nb < 0)
		{
			nb = -nb;
			ft_putchar('-');
		}
		if (nb < 10)
			ft_putchar(((nb % 10) + 48));
		else
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	}
}

int		height(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		if (*str == '\n')
			i++;
		str++;
	}
	return (i);
}

int		width(char *str)
{
	int i;

	i = 0;
	while (*str != '\n')
	{
		i++;
		str++;
	}
	return (i);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	test(int x, int y, char *z)
{
	int i;

	i = ft_strlen(z);
	if (z[0] == 'o')
		write(1, "[rush-00] [", 11);
	if (z[0] == '/')
		write(1, "[rush-01] [", 11);
	ft_putnbr(x);
	write(1, "] [", 3);
	ft_putnbr(y);
	write(1, "]\n", 2);
}

int		main(void)
{	
	char *box;

	box = (char *)malloc(sizeof(char) * 9999 + 1);
	read(0, box, 9999);
	box[9999] = '\0';
	test(width(box), height(box), box);
	free(box);
}
