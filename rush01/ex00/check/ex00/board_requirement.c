/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board_requirement.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takando <takando@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 15:48:26 by takando           #+#    #+#             */
/*   Updated: 2025/09/14 19:07:17 by takando          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	format_requirements(int *dest_row_req, int *dest_col_req, int *reqs,
			int board_size);
int		left_visible_block( int *board, int row_n, int board_size);
int		right_visible_block( int *board, int row_n, int board_size);
int		top_visible_block( int *board, int col_n, int board_size);
int		bottom_visible_block( int *board, int col_n, int board_size);

int		check_board_requirement(int *board, int *reqs, int board_size);
int		check_row_req(int *board, int *row_req, int board_size, int row_n);
int		check_column_req(int *board, int *col_req, int board_size, int col_n);

/*
return value
1 : meet the requirement
0 : not meet the requirement
*/
int	check_board_requirement(int *board, int *reqs, int board_size)
{
	int	row_req[18];
	int	col_req[18];
	int	i;

	i = 0;
	while (i < 18)
	{
		row_req[i] = -1;
		col_req[i] = -1;
		i++;
	}
	format_requirements(row_req, col_req, reqs, board_size);
	i = 0;
	while (i < board_size)
	{
		if (!(check_row_req(board, row_req, board_size, i)
				&& check_column_req(board, col_req, board_size, i)))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
return value
1 : meet the requirement
0 : not meet the requirement
*/
int	check_row_req(int *board, int *row_req, int board_size, int row_n)
{
	int	left_req;
	int	right_req;

	left_req = row_req[row_n];
	right_req = row_req[row_n + board_size];
	if (!(left_visible_block(board, row_n, board_size) == left_req
			&& right_visible_block(board, row_n, board_size) == right_req))
	{
		return (0);
	}
	return (1);
}

/*
return value
1 : meet the requirement
0 : not meet the requirement
*/
int	check_column_req(int *board, int *col_req, int board_size, int col_n)
{
	int	top_req;
	int	bottom_req;

	top_req = col_req[col_n];
	bottom_req = col_req[col_n + board_size];
	if (!(top_visible_block(board, col_n, board_size) == top_req
			&& bottom_visible_block(board, col_n, board_size) == bottom_req))
	{
		return (0);
	}
	return (1);
}
