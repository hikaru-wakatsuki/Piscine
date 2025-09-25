/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 11:34:30 by takando           #+#    #+#             */
/*   Updated: 2025/09/14 15:31:44 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		error_handling(int boolean);

/*
parameter
boolean : 1 or 0 (result of the conditional expression evaluation)
return value
1: Error detected
0: No error detected
*/
int	error_handling(int boolean)
{
	if (boolean)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	return (0);
}
