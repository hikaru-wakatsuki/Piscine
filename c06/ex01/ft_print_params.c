/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 11:09:37 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/12 11:49:25 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	argc = 0;
	while (argv[i])
	{
		while (*argv[i])
		{
			write(1, (argv[i])++, 1);
		}
		write(1, "\n", 1);
		i++;
	}
}
