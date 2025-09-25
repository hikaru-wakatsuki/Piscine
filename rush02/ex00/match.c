/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 10:48:42 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/21 20:35:14 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	is_valid_first_match(char *nbr, t_dict *dict)
{
	char	*value;
	char	*value_one;

	value = search_index_key_to_value(nbr, dict);
	if (value == NULL)
		return (0);
	if (nbr[0] == '1' && nbr[2] == '0')
	{
		value_one = search_index_key_to_value("1", dict);
		ft_putstr(value_one);
		ft_putstr(" ");
	}
	ft_putstr(value);
	return (1);
}

int	board_match(char **nbr_board, t_dict *dict)
{
	int	i;
	int	j;

	i = 0;
	while (nbr_board[i])
	{
		if (!(is_valid_total_match(nbr_board[i], dict)))
			return (0);
		i++;
	}
	j = 0;
	while (nbr_board[j])
	{
		if (!(is_valid_second_match(nbr_board[j], dict)))
			return (0);
		if (i != j + 1)
			ft_putstr(" ");
		j++;
	}
	return (1);
}

int	is_valid_second_match(char *nbr, t_dict *dict)
{
	char	*value;

	value = search_index_key_to_value(nbr, dict);
	if (value == NULL)
		return (0);
	ft_putstr(value);
	return (1);
}

int	is_valid_total_match(char *nbr, t_dict *dict)
{
	if (search_key_match(nbr, dict))
		return (1);
	return (0);
}
