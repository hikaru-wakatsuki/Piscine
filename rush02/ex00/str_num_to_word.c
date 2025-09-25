/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_num_to_word.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmuramat <kmuramat@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 09:39:47 by kmuramat          #+#    #+#             */
/*   Updated: 2025/09/21 22:52:51 by kmuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	two_dim_len(char *digit_multiple3, int quotient, int arr_count)
{
	int	j;

	j = 0;
	while (quotient > 0)
	{
		if (('1' <= digit_multiple3[j]) && (digit_multiple3[j] <= '9'))
			arr_count += 2;
		if (('1' <= digit_multiple3[j + 1]) && (digit_multiple3[j + 1] <= '9'))
			arr_count++;
		if (!(digit_multiple3[j + 1] == '1') && (('1' <= digit_multiple3[j + 2])
				&& (digit_multiple3[j + 2] <= '9')))
		{
			arr_count++;
		}
		if (quotient > 1)
			arr_count++;
		j += 3;
		quotient--;
	}
	return (arr_count + 1);
}

void	helper_ans(char **two_dim_arr, int *two_dim_index, char *tmp_str)
{
	if (tmp_str != NULL)
	{
		two_dim_arr[*two_dim_index] = tmp_str;
		(*two_dim_index)++;
	}
	return ;
}

char	**make_ans_arr(int quotient, char *digit_multiple3, char **two_dim_arr,
		int *two_dim_index)
{
	int		j;
	char	*tmp_hundred;
	char	*tmp_ten;
	char	*tmp_one;
	char	*tmp_place;

	j = 0;
	while (quotient > 0)
	{
		tmp_hundred = hundred(digit_multiple3, j);
		helper_ans(two_dim_arr, two_dim_index, tmp_hundred);
		tmp_place = hund_place(digit_multiple3, j);
		helper_ans(two_dim_arr, two_dim_index, tmp_place);
		tmp_ten = ten(digit_multiple3, j);
		helper_ans(two_dim_arr, two_dim_index, tmp_ten);
		tmp_one = one(digit_multiple3, j);
		helper_ans(two_dim_arr, two_dim_index, tmp_one);
		tmp_place = over_thousand(quotient, tmp_hundred, tmp_ten, tmp_one);
		helper_ans(two_dim_arr, two_dim_index, tmp_place);
		j += 3;
		quotient--;
	}
	two_dim_arr[*two_dim_index] = NULL;
	return (two_dim_arr);
}

char	**ans_num(char *digit_multiple3)
{
	int		quotient;
	int		arr_count;
	char	**two_dim_arr;
	int		two_dim_index;

	arr_count = 0;
	two_dim_index = 0;
	quotient = ft_strlen(digit_multiple3) / 3;
	arr_count = two_dim_len(digit_multiple3, quotient, arr_count);
	two_dim_arr = (char **)malloc(sizeof(char *) * arr_count);
	if (two_dim_arr == NULL)
		return (NULL);
	two_dim_arr = make_ans_arr(quotient, digit_multiple3, two_dim_arr,
			&two_dim_index);
	return (two_dim_arr);
}
