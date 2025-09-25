/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 09:10:32 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/07 12:37:29 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	pn;

	if (n >= 0)
	{
		pn = 'P';
		write (1, &pn, 1);
	}
	else
	{
		pn = 'N';
		write (1, &pn, 1);
	}
}

// int	main(void)
// {
// 	ft_is_negative(1);
// 	return (0);
// }
