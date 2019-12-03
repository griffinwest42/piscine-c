/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 18:05:44 by grwest            #+#    #+#             */
/*   Updated: 2019/10/30 21:28:14 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	char	*hello;
	int		i;

	i = 1;
	while (i < argc)
	{
		hello = argv[i];
		while (*hello)
		{
			ft_putchar(*hello);
			hello++;
		}
		i++;
		ft_putchar('\n');
	}
	return (0);
}
