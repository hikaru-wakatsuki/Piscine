/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 11:52:20 by nkataoka          #+#    #+#             */
/*   Updated: 2025/09/07 13:44:56 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush03(int x, int y);
void	ft_putchar(char c);
void	putline(int x);
void	putline2(int x, int y);

void	rush03(int x, int y)
{
	if (x > 0 && y > 0)
	{
		putline(x);
		putline2(x, y);
		if (y >= 2)
		{
			putline(x);
		}
	}
	else
	{
		write(2, "error\n", 6);
	}
}

void	putline(int x)
{
	int	count;

	ft_putchar('A');
	if (x >= 2)
	{
		count = 0;
		while (count < x - 2)
		{
			ft_putchar('B');
			count++;
		}
	}
	if (x >= 2)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	putline2(int x, int y)
{
	int	count;
	int	index;

	count = 0;
	while (count < y - 2)
	{
		ft_putchar('B');
		index = 0;
		while (index < x - 2)
		{
			ft_putchar(' ');
			index++;
		}
		if (x >= 2)
		{
			ft_putchar('B');
		}
		ft_putchar('\n');
		count++;
	}
}
