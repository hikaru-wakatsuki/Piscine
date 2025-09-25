/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_assign_zero.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 11:33:21 by kotakaha          #+#    #+#             */
/*   Updated: 2025/09/21 17:31:22 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*str_malloc(int len)
{
	char	*new_str;

	new_str = (char *)malloc(sizeof(char) *(len + 1));
	if (!new_str)
		return (NULL);
	return (new_str);
}

char	**board_malloc(int len)
{
	char	**new_board;

	new_board = (char **)malloc(sizeof(char *) *(len + 1));
	if (!new_board)
		return (NULL);
	return (new_board);
}

t_dict	*dict_malloc(int len)
{
	t_dict	*new_dict;

	new_dict = (t_dict *)malloc(sizeof(t_dict) * (len + 1));
	if (!new_dict)
		return (NULL);
	return (new_dict);
}

char	*ft_assign_zero(void)
{
	char	*s;

	s = str_malloc(sizeof(char) * 2);
	s[0] = '0';
	s[1] = '\0';
	return (s);
}
