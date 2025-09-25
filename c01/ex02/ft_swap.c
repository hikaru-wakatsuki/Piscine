/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 20:43:48 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/05 09:11:11 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// void	ft_putchar(char c)
// {
// 	write(1, &c ,1);
// }
//
// int	main(void)
// {
// 	int	c;
// 	int	d;
// 	int	*e;
// 	int	*f;

// 	c = 0;
// 	d = 1;
// 	e = &c;
// 	f = &d;
// 	ft_putchar(c + '0');
// 	ft_putchar(d + '0');
// 	ft_putchar(',');
// 	ft_swap(e, f);
// 	ft_putchar(c + '0');
// 	ft_putchar(d + '0');
// }
