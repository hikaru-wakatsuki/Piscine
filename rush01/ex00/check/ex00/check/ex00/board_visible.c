/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_visible.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takando <takando@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 15:48:26 by takando           #+#    #+#             */
/*   Updated: 2025/09/14 19:07:53 by takando          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	left_visible_block(int *board, int row_n, int board_size);
int	right_visible_block(int *board, int row_n, int board_size);
int	top_visible_block(int *board, int col_n, int board_size);
int	bottom_visible_block(int *board, int col_n, int board_size);

/*
return value
visible block count
*/
int	left_visible_block(int *board, int row_n, int board_size)
{
	int	block_cnt;
	int	before_block_height;
	int	i;
	int	idx;

	block_cnt = 0;
	before_block_height = 0;
	i = 0;
	while (i < board_size)
	{
		idx = row_n * board_size + i;
		if (board[idx] > before_block_height)
		{
			block_cnt++;
			before_block_height = board[idx];
		}
		i++;
	}
	return (block_cnt);
}

/*
return value
visible block count
*/
int	right_visible_block(int *board, int row_n, int board_size)
{
	int	block_cnt;
	int	before_block_height;
	int	i;
	int	idx;

	block_cnt = 0;
	before_block_height = 0;
	i = board_size - 1;
	while (i >= 0)
	{
		idx = row_n * board_size + i;
		if (board[idx] > before_block_height)
		{
			block_cnt++;
			before_block_height = board[idx];
		}
		i--;
	}
	return (block_cnt);
}

/*
return value
visible block count
*/
int	top_visible_block(int *board, int col_n, int board_size)
{
	int	block_cnt;
	int	before_block_height;
	int	i;
	int	idx;

	block_cnt = 0;
	before_block_height = 0;
	i = 0;
	while (i < board_size)
	{
		idx = col_n + i * board_size;
		if (board[idx] > before_block_height)
		{
			block_cnt++;
			before_block_height = board[idx];
		}
		i++;
	}
	return (block_cnt);
}

/*
return value
visible block count
*/
int	bottom_visible_block(int *board, int col_n, int board_size)
{
	int	block_cnt;
	int	before_block_height;
	int	i;
	int	idx;

	block_cnt = 0;
	before_block_height = 0;
	i = board_size - 1;
	while (i >= 0)
	{
		idx = col_n + i * board_size;
		if (board[idx] > before_block_height)
		{
			block_cnt++;
			before_block_height = board[idx];
		}
		i--;
	}
	return (block_cnt);
}
