/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 11:59:28 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/18 13:27:39 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		char_set(char to_find, char *charset);
int		count_words(char *str, char *charset);
char	*ft_strndup(char *src, int n, int index);
void	ft_board_input(char *str, char *charset, char **board);

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
	int		str_index;
	int		board_index;
	int		n;

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

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;
// 	char	*charset;
// 	char	**box;
// 	int		i;

// 	str = " Hello!! My Name is Pika!! ";
// 	charset = " !";
// 	i = 0;
// 	box = ft_split(str, charset);
// 	while (box[i])
// 		printf("%s\n", box[(i++)]);
// 	free(box);
// }
