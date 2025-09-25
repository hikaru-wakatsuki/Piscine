/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 13:17:06 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/14 21:16:43 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE 4

int	error_handling(int boolean);
int	ft_para_check(char *str, int size);
int	convert_int_list(int *dest, char *str, int size);
int	ft_match_box(int *board, int fill_cnt, int *reqs, int x);

int	main(int argc, char *argv[])
{
	int	board[SIZE * SIZE];
	int	l;
	int	reqs[SIZE * 4];
	int	res;

	if (error_handling(argc != 2))
		return (0);
	if (error_handling(ft_para_check(argv[1], SIZE) == 0))
		return (0);
	res = convert_int_list(reqs, argv[1], SIZE * 4);
	if (error_handling(res == 0))
		return (0);
	l = 0;
	while (l < SIZE * SIZE)
		board[(l++)] = -1;
	res = ft_match_box(board, 0, reqs, SIZE);
	if (error_handling(res == 0))
		return (0);
	return (0);
}
