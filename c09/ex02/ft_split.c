/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 09:07:30 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/25 16:50:04 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**ft_split(char *str, char *charset)
{
	int		str_count;
	char	**board;

	str_count = count_words(str, charset);
	board = (char **)malloc(sizeof(char *) * (str_count + 1));
	ft_board_input(str, charset, board);
	return (board);
}

void	ft_board_input(char *str, char *charset, char **board)
{
	int	str_index;
	int	board_index;
	int	n;

	str_index = 0;
	board_index = 0;
	n = 0;
	while (str[str_index])
	{
		if (char_set(str[str_index], charset) == 0)
		{
			if (n != 0)
				board[(board_index++)] = ft_strndup(str, n, str_index);
			n = 0;
		}
		else
			n++;
		str_index++;
	}
	if (n != 0)
		board[(board_index++)] = ft_strndup(str, n, str_index);
	board[board_index] = NULL;
}

int	char_set(char to_find, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (to_find == charset[i])
			return (0);
		i++;
	}
	return (1);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (char_set(str[i], charset) != 0)
			count++;
		i++;
	}
	return (count);
}

char	*ft_strndup(char *src, int n, int str_index)
{
	char	*dup;
	int		index;
	int		i;

	dup = (char *)malloc(sizeof(char) * (n + 1));
	index = str_index - n;
	i = 0;
	while (src[index] && index < str_index)
	{
		dup[(i++)] = src[index];
		index++;
	}
	dup[index] = '\0';
	return (dup);
}
