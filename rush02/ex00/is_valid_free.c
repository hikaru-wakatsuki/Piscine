/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 15:56:49 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/21 20:21:02 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	board_free(char **board)
{
	int	i;

	i = 0;
	if (board == NULL)
		return ;
	while (board[i])
	{
		free(board[i]);
		i++;
	}
	free(board);
}

void	str_free(char *str)
{
	if (!(str == NULL))
		free(str);
}

void	dict_free(t_dict *dict)
{
	int	i;

	i = 0;
	if (dict == NULL)
		return ;
	while (dict[i].key)
	{
		free(dict[i].key);
		free(dict[i].value);
		i++;
	}
	free(dict);
}
