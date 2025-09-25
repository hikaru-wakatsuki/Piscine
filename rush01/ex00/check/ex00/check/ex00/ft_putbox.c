/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbox.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 16:49:47 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/14 12:27:08 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putbox(int *board, int size)
{
	int	l;

	l = 0;
	while (l < size * size)
	{
		ft_putchar(board[l] + '0');
		if (!(l % size == size - 1))
			ft_putchar(' ');
		if (l % size == size - 1)
			ft_putchar('\n');
		l++;
	}
}
