/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 16:05:10 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/15 21:12:49 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_ten_queens_puzzle(void);
int		ft_check(int *queen, int n, int key);
void	dfs(int *queen, int key, int *count);
void	ft_put_queen(int *queen);

int	ft_ten_queens_puzzle(void)
{
	int	i;
	int	queen[10];
	int	count;

	i = 0;
	while (i < 10)
		queen[(i++)] = -1;
	count = 0;
	dfs(queen, 0, &count);
	return (count);
}

int	ft_check(int *queen, int n, int key)
{
	int	count;
	int	index;
	int	position;

	count = 0;
	while (count < 10)
	{
		if (queen[count] >= 0)
		{
			position = queen[count] - n;
			index = key - count;
			if (position < 0)
				position *= -1;
			if (key - count < 0)
				index *= -1;
			if (position == index)
				return (1);
		}
		if (n == queen[count])
			return (1);
		count++;
	}
	return (0);
}

void	dfs(int *queen, int key, int *count)
{
	int	n;

	if (key == 10)
	{
		*count += 1;
		ft_put_queen(queen);
		return ;
	}
	n = 0;
	while (n < 10)
	{
		if (ft_check(queen, n, key) == 0)
		{
			queen[key] = n;
			dfs(queen, key + 1, count);
			queen[key] = -1;
		}
		n++;
	}
}

void	ft_put_queen(int *queen)
{
	int		count;
	char	put_queen[10];

	count = 0;
	while (count < 10)
	{
		put_queen[count] = queen[count] + '0';
		write(1, &put_queen[count], 1);
		count++;
	}
	write(1, "\n", 1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", ft_ten_queens_puzzle());
// 	return (0);
// }
