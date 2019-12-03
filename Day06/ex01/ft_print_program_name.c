/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 16:12:25 by grwest            #+#    #+#             */
/*   Updated: 2019/10/30 18:59:27 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	char *hello;

	hello = *argv;
	while (*hello && argc)
	{
		ft_putchar(*hello);
		hello++;
	}
	ft_putchar('\n');
	return (0);
}
