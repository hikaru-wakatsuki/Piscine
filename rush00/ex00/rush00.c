/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 10:46:56 by rkondo            #+#    #+#             */
/*   Updated: 2025/09/07 13:53:28 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* ************************************************************************** */
/*   プロトタイプ宣言                                                         */
/* ************************************************************************** */

void		ft_putchar(char c);
void		rush00(int x, int y);
void		put_line00(int x, char start, char center, char end);

/* ************************************************************************** */
/*   関数定義                                                                 */
/* ************************************************************************** */

void	rush00(int x, int y)
{
	int	index;

	if (x <= 0 || y <= 0)
	{
		write(2, "error\n", 6);
		return ;
	}
	put_line00(x, 'O', '-', 'O');
	index = 0;
	while (index < y - 2)
	{
		put_line00(x, '|', ' ', '|');
		index++;
	}
	if (y >= 2)
		put_line00(x, 'O', '-', 'O');
	return ;
}

void	put_line00(int x, char start, char center, char end)
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
