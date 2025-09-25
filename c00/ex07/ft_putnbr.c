/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 20:29:26 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/07 10:06:55 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_output(long n);

void	ft_putnbr(int nb)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		ft_output(n * -1);
	}
	else
		ft_output(n);
}

void	ft_output(long n)
{
	if (n >= 10)
	{
		ft_output(n / 10);
	}
	ft_putchar(n % 10 + '0');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// int	main(void)
// {
// 	ft_putnbr(-2147483648);
// 	return (0);
// }
