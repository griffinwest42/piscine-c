/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grwest <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 19:29:20 by grwest            #+#    #+#             */
/*   Updated: 2019/10/30 19:34:41 by grwest           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	char	*hello;
	int		i;

	i = argc - 1;
	while (i > 0)
	{
		hello = argv[i];
		while (*hello)
		{
			ft_putchar(*hello);
			hello++;
		}
		i--;
		ft_putchar('\n');
	}
	return (0);
}
