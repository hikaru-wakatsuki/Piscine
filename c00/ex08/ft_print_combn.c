/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 09:19:26 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/07 09:48:43 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_comb(int n)
{
	int	i;

	i = 0;
	i = 
	while (i >= 1)
	{
		ft_print_comb(n - 1);
		if ()
		{
			ft_putchar(i / 10 + '0');
			ft_putchar(i % 10 + '0');
			ft_putchar(', ');
		}

	}
}

void	ft_number(int n)
{
	int	count;

	count 0;
	while (count <= n)
	{
		n = n * 10
		count++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	ft_print_comb(2);
	return (0);
}
