/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 10:33:10 by kotakaha          #+#    #+#             */
/*   Updated: 2025/09/21 20:35:44 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_number_digit_count_multiple3(char *number)
{
	int		len;
	int		new_len;
	int		i;
	int		j;
	char	*number_digit_multiple3;

	i = 0;
	j = 0;
	len = ft_strlen(number);
	new_len = ft_count_new_strlen(len);
	number_digit_multiple3 = (char *)malloc(new_len + 1);
	if (!number_digit_multiple3)
		return (NULL);
	while ((new_len - len) > i)
	{
		number_digit_multiple3[i++] = '0';
	}
	while (number[j] != '\0')
	{
		number_digit_multiple3[i++] = number[j++];
	}
	number_digit_multiple3[i] = '\0';
	return (number_digit_multiple3);
}

int	main(int argc, char **argv)
{
	char	*dict_path;
	char	*arg_number;
	char	*change_digit_multiple3;
	char	**bif_board;
	t_dict	*dict;

	dict_path = "numbers.dict";
	if (!assign_and_validate(argc, argv, &arg_number, &dict_path))
		return (1);
	bif_board = is_valid_read(dict_path);
	if (bif_board == NULL)
		return (1);
	dict = input_dict(bif_board);
	board_free(bif_board);
	if (is_valid_first_match(arg_number, dict))
		return (0);
	change_digit_multiple3 = ft_number_digit_count_multiple3(arg_number);
	bif_board = ans_num(change_digit_multiple3);
	if (!(board_match(bif_board, dict)))
		dict_error();
	str_free(change_digit_multiple3);
	dict_free(dict);
	board_free(bif_board);
	return (0);
}
