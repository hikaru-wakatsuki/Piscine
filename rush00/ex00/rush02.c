/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 09:54:07 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/07 13:45:06 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_height02(int x, char a, char b, char c)
{
	int	count;

	ft_putchar(a);
	count = 0;
	while (count < x - 2)
	{
		ft_putchar(b);
		count++;
	}
	if (x >= 2)
		ft_putchar(c);
	ft_putchar('\n');
}

void	ft_width02(int x)
{
	int	count;

	count = 0;
	while (count <= x)
	{
		if (count == 0)
			ft_putchar('B');
		if (count == x - 2)
			ft_putchar('B');
		ft_putchar(' ');
		count++;
	}
}

void	rush02(int x, int y)
{
	int	count;

	count = 0;
	if (x > 0 && y > 0)
	{
		ft_height02(x, 'A', 'B', 'A');
		while (count < y - 2)
		{
			ft_width02(x);
			ft_putchar('\n');
			count++;
		}
		if (y >= 2)
			ft_height02(x, 'C', 'B', 'C');
	}
	else
	{
		write(2, "error\n", 6);
	}
}
