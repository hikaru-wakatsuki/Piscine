/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 10:46:56 by rkondo            #+#    #+#             */
/*   Updated: 2025/09/07 13:53:44 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* ************************************************************************** */
/*   プロトタイプ宣言                                                         */
/* ************************************************************************** */

void		ft_putchar(char c);
void		rush04(int x, int y);
void		put_line04(int x, char start, char center, char end);

/* ************************************************************************** */
/*   関数定義                                                                 */
/* ************************************************************************** */

void	rush04(int x, int y)
{
	int	index;

	if (x <= 0 || y <= 0)
	{
		write(2, "error\n", 6);
		return ;
	}
	put_line04(x, 'A', 'B', 'C');
	index = 0;
	while (index < y - 2)
	{
		put_line04(x, 'B', ' ', 'B');
		index++;
	}
	if (y >= 2)
		put_line04(x, 'C', 'B', 'A');
	return ;
}

void	put_line04(int x, char start, char center, char end)
{
	int	index;

	ft_putchar(start);
	if (x >= 2)
	{
		index = 0;
		while (index < x - 2)
		{
			ft_putchar(center);
			index++;
		}
		ft_putchar(end);
	}
	ft_putchar('\n');
	return ;
}
