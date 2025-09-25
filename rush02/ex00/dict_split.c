/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 10:00:10 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/21 20:30:15 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	**dict_split(char *board)
{
	int		i;
	int		j;
	char	**buffer;

	buffer = (char **)malloc(sizeof(char *) * 3);
	buffer[2] = NULL;
	i = 0;
	buffer[0] = (char *)malloc(sizeof(char) * len_a_to_b(board, '0', '9', i));
	j = 0;
	while ('0' <= board[i] && board[i] <= '9')
	{
		buffer[0][(j++)] = board[(i++)];
		buffer[0][j] = '\0';
	}
	i = space_remove(board, i);
	buffer[1] = (char *)malloc(sizeof(char) * len_a_to_b(board, ' ', '~', i));
	j = 0;
	while (' ' <= board[i] && board[i] <= '~')
	{
		buffer[1][(j++)] = board[(i++)];
		buffer[1][j] = '\0';
	}
	return (buffer);
}

int	len_a_to_b(char *board, char a, char b, int j)
{
	int	i;

	i = 0;
	while (a <= board[j] && board[j] <= b && board[j])
	{
		i++;
		j++;
	}
	return (i + 1);
}

int	space_remove(char *board, int i)
{
	while (' ' == board[i])
		i++;
	if (':' == board[i])
		i++;
	while (' ' == board[i])
		i++;
	return (i);
}
