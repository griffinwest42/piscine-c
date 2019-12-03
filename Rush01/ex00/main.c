/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 22:47:34 by wiwang            #+#    #+#             */
/*   Updated: 2019/11/03 23:08:04 by wiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
int		find_empty(int *row, int *col, int board[9][9]);
int		row_repeat(int row, int digit, int board[9][9]);
int		col_repeat(int col, int digit, int board[9][9]);
int		region_repeat(int row, int col, int digit, int board[9][9]);
int		safe_num(int row, int col, int digit, int board[9][9]);
int		solve_board(int board[9][9]);

void	print_board(int board[9][9])
{
	int		row;
	int		col;

	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			ft_putnbr(board[row][col]);
			if (col < 8)
				ft_putchar(' ');
			col++;
		}
		row++;
		ft_putchar('\n');
	}
}

void	fill_board(char **argv, int board[9][9])
{
	int		row;
	int		col;

	row = 1;
	while (row < 10)
	{
		col = 0;
		while (col < 9)
		{
			if (argv[row][col] != '.')
				board[row - 1][col] = argv[row][col] - '0';
			else
				board[row - 1][col] = 0;
			col++;
		}
		row++;
	}
}

int		check_chars(char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < 10)
	{
		j = 0;
		while (j < 9)
		{
			if ((argv[i][j] >= '0' && argv[i][j] <= '9') || (argv[i][j] == '.'))
				j++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

int		check_param_len(char **argv)
{
	int i;

	i = 1;
	while (i < 10)
	{
		if (ft_strlen(argv[i]) != 9)
			return (0);
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	char	*c;
	int		sudoku_board[9][9];

	c = "Error\n";
	if (argc == 10 && check_chars(argv) == 1 && check_param_len(argv) == 1)
	{
		fill_board(argv, sudoku_board);
		if (solve_board(sudoku_board))
		{
			print_board(sudoku_board);
			return (0);
		}
	}
	else
		ft_putstr(c);
	return (0);
}
