/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 11:27:13 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/12 11:49:04 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	argc -= 1;
	while (argc > 0)
	{
		while (*argv[argc])
		{
			write(1, (argv[argc])++, 1);
		}
		write(1, "\n", 1);
		argc--;
	}
}
