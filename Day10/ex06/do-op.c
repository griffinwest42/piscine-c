/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 16:34:48 by grwest            #+#    #+#             */
/*   Updated: 2019/11/05 17:52:11 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int        ft_atoi(char *str)
{
    int i;
    int ans;
    int neg;
    i = 0;
    ans = 0;
    neg = 1;
    while (str[i] <= 32)
        i++;
    if (str[i] == '+')
        i++;
    if (str[i] == '-')
    {
        neg = -neg;
        i++;
    }
    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        ans = (ans * 10) + (str[i] - '0');
        i++;
    }
    return (neg * ans);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
	else
	{
		if (nb >= 10)
			ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
}

int		ft_calc(int value1, int value2, char operator)
{
	int answer;

	answer = 0;
	if (operator == '+')
		answer = value1 + value2;
	if (operator == '-')
		answer = value1 - value2;
	if (operator == '*')
		answer = value1 * value2;
	if (operator == '/')
		answer = value1 / value2;
	if (operator == '%')
		answer = value1 % value2;
	return (answer);

}

int		main(int argc, char **argv)
{
	int x;
	int y;
	char z;
	
	if (argc != 3)
		return (0);
/*	if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
			&& argv[2][0] !='/' &&  argv[2][0] !='%')
	{	
		ft_putnbr(0);
		return (0);
	}*/
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[3]);
	z = argv[2][0];
	ft_putnbr(ft_calc(x, y, z));
	return (0);
}
