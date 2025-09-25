/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 18:54:03 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/20 21:09:06 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	dict_error(void)
{
	write(1, "Dict Error\n", 11);
}

void	input_error(void)
{
	write(1, "Error\n", 6);
}
