/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 22:53:47 by wiwang            #+#    #+#             */
/*   Updated: 2019/11/03 23:08:10 by wiwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		find_empty(int *row, int *col, int board[9][9]);

int		row_repeat(int row, int digit, int board[9][9])
{
	int		col;

	col = 0;
	while (col < 9)
		if (board[row][col++] == digit)
			return (1);
	return (0);
}

int		col_repeat(int col, int digit, int board[9][9])
{
	int		row;

	row = 0;
	while (row < 9)
		if (board[row++][col] == digit)
			return (1);
	return (0);
}

int		region_repeat(int row, int col, int digit, int board[9][9])
{
	int		row_region;
	int		col_region;

	while (row % 3 != 0)
		row--;
	while (col % 3 != 0)
		col--;
	row_region = row;
	col_region = col;
	while (row_region < row + 3)
	{
		col_region = col;
		while (col_region < col + 3)
		{
			if (board[row_region][col_region] == digit)
				return (1);
			col_region++;
		}
		row_region++;
	}
	return (0);
}

int		safe_num(int row, int col, int digit, int board[9][9])
{
	return (!row_repeat(row, digit, board)
			&& !col_repeat(col, digit, board)
			&& !region_repeat(row, col, digit, board));
}

int		solve_board(int board[9][9])
{
	int		row;
	int		col;
	int		digit;

	if (!find_empty(&row, &col, board))
		return (1);
	digit = 1;
	while (digit <= 9)
	{
		if (safe_num(row, col, digit, board))
		{
			board[row][col] = digit;
			if (solve_board(board))
				return (1);
			board[row][col] = 0;
		}
		digit++;
	}
	return (0);
}
