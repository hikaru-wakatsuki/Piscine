/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 08:44:10 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/05 09:10:56 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	c;
// 	int	d;
// 	int	*e;
// 	int	*f;

// 	a = 0;
// 	b = 0;
// 	c = 8;
// 	d = 3;
// 	e = &a;
// 	f = &b;
// 	ft_div_mod(c, d, e, f);
// 	ft_putchar(c + '0');
// 	ft_putchar('/');
// 	ft_putchar(d + '0');
// 	ft_putchar('=');
// 	ft_putchar(a + '0');
// 	ft_putchar('.');
// 	ft_putchar('.');
// 	ft_putchar('.');
// 	ft_putchar(b + '0');
// 	return (0);
// }
