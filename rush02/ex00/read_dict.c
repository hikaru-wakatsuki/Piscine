/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 10:03:05 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/21 20:31:07 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	**is_valid_read(char *dict_name)
{
	int		fd;
	int		byte_num;
	char	buffer[1024];
	char	**board;

	fd = open(dict_name, O_RDONLY);
	byte_num = read(fd, buffer, sizeof(buffer) - 1);
	if (fd == -1 || byte_num == -1)
	{
		dict_error();
		return (NULL);
	}
	board = ft_split(buffer, "\n");
	close(fd);
	return (board);
}

t_dict	*input_dict(char **board)
{
	t_dict	*dict;
	int		i;
	char	**buffer_key_value;

	i = 0;
	while (board[i])
		i++;
	dict = (t_dict *)malloc(sizeof(t_dict) * (i + 1));
	dict[i].key = NULL;
	dict[i].value = NULL;
	i = 0;
	while (board[i])
	{
		buffer_key_value = dict_split(board[i]);
		dict[i].key = buffer_key_value[0];
		dict[i].value = buffer_key_value[1];
		free(buffer_key_value);
		i++;
	}
	return (dict);
}
