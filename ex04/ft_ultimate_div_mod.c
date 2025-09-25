/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 09:13:03 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/05 09:35:30 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	*c;
// 	int	*d;

// 	a = 8;
// 	b = 3;
// 	c = &a;
// 	d = &b;
// 	ft_putchar(a + '0');
// 	ft_putchar('/');
// 	ft_putchar(b + '0');
// 	ft_putchar('=');
// 	ft_ultimate_div_mod(c, d);
// 	ft_putchar(a + '0');
// 	ft_putchar('.');
// 	ft_putchar('.');
// 	ft_putchar('.');
// 	ft_putchar(b + '0');
// }
