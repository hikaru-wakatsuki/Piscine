/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_and_validate.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 11:51:08 by kotakaha          #+#    #+#             */
/*   Updated: 2025/09/21 13:45:43 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	assign_and_validate(int argc, char **argv, char **n, char **p)
{
	*n = NULL;
	if (argc == 2)
		*n = argv[1];
	if (argc == 3)
	{
		*p = argv[1];
		*n = argv[2];
	}
	if (argc != 2 && argc != 3)
	{
		input_error();
		return (0);
	}
	if (!ft_number_is_valid(*n))
	{
		input_error();
		return (0);
	}
	return (1);
}
