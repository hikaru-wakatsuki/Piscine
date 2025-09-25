/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_solve.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takando <takando@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 15:57:27 by takando           #+#    #+#             */
/*   Updated: 2025/09/14 20:22:48 by takando          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putbox(int *board, int size);
int		check_board_requirement(int *board, int *reqs, int board_size);
int		check_row_req(int *board, int *row_req, int board_size, int row_n);
int		*format_req_row(int *dest, int *reqs, int board_size);

int		ft_match_box(int *board, int fill_cnt, int *reqs, int x);
int		ft_check(int *board, int block_height, int fill_cnt, int board_size);
int		is_valid_row(int *board, int *reqs, int board_size, int row_n);

/*
parameter
x : board_size

return value
1 : normal
0 : error
*/
int	ft_match_box(int *board, int fill_cnt, int *reqs, int x)
{
	int	block_height;

	if (fill_cnt > 0 && fill_cnt % x == 0)
	{
		if (is_valid_row(board, reqs, x, fill_cnt / x - 1) == 0)
			return (0);
	}
	if (fill_cnt == x * x && check_board_requirement(board, reqs, x))
	{
		ft_putbox(board, x);
		return (1);
	}
	block_height = 1;
	while (block_height <= x)
	{
		if (ft_check(board, block_height, fill_cnt, x) == 1)
		{
			board[fill_cnt] = block_height;
			if (ft_match_box(board, fill_cnt + 1, reqs, x) == 1)
				return (1);
			board[fill_cnt] = -1;
		}
		block_height++;
	}
	return (0);
}

/*
return value
1 : normal
0 : error
*/
int	ft_check(int *board, int block_height, int key, int board_size)
{
	int	i;
	int	div;
	int	mod;
	int	row_idx;
	int	col_idx;

	i = 0;
	div = key / board_size;
	mod = key % board_size;
	while (i < board_size)
	{
		row_idx = i + div * board_size;
		col_idx = mod + i * board_size;
		if (key != row_idx && board[row_idx] == block_height)
			return (0);
		if (key != col_idx && board[col_idx] == block_height)
			return (0);
		i++;
	}
	return (1);
}

/*
return value
1 : valid
0 : invalid
*/
int	is_valid_row(int *board, int *reqs, int board_size, int row_n)
{
	int	row_req[18];

	format_req_row(row_req, reqs, board_size);
	return (check_row_req(board, row_req, board_size, row_n));
}
