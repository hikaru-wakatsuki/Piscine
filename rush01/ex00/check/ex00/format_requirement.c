/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_requirement.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takando <takando@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 17:01:03 by takando           #+#    #+#             */
/*   Updated: 2025/09/14 19:07:02 by takando          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	format_requirements(int *dest_row_req, int *dest_col_req, int *reqs,
			int board_size);
int		*format_req_row(int *dest, int *reqs, int board_size);
int		*format_req_col(int *dest, int *reqs, int board_size);

void	format_requirements(int *dest_row, int *dest_col, int *reqs,
		int board_size)
{
	format_req_row(dest_row, reqs, board_size);
	format_req_col(dest_col, reqs, board_size);
}

int	*format_req_row(int *dest, int *reqs, int board_size)
{
	int	i;

	i = 0;
	while (i < board_size * 2)
	{
		dest[i] = reqs[i + board_size * 2];
		i++;
	}
	return (dest);
}

int	*format_req_col(int *dest, int *reqs, int board_size)
{
	int	i;

	i = 0;
	while (i < board_size * 2)
	{
		dest[i] = reqs[i];
		i++;
	}
	return (dest);
}
