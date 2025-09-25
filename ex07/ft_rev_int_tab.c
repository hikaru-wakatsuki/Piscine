/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 14:08:00 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/07 16:38:36 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// void	ft_putchar(char c);
// void	ft_output(long n);
// void	ft_putnbr(int nb);

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	temp;

	count = 0;
	temp = 0;
	while (count < size / 2)
	{
		temp = tab[count];
		tab[count] = tab[size - count - 1];
		tab[size - count - 1] = temp;
		count++;
	}
}

// void	ft_putnbr(int nb)
// {
// 	long	n;

// 	n = nb;
// 	if (n < 0)
// 	{
// 		ft_putchar('-');
// 		ft_output(n * -1);
// 	}
// 	else
// 		ft_output(n);
// }

// void	ft_output(long n)
// {
// 	if (n >= 10)
// 	{
// 		ft_output(n / 10);
// 	}
// 	ft_putchar(n % 10 + '0');
// }

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// int	main(void)
// {
// 	int	*ptr;
// 	int	nbr[5] = {1, 2, 3, 4, 5};
// 	int	count;
// 	int	size;

// 	ptr = nbr;
// 	size = 5;
// 	ft_rev_int_tab(ptr, size);
// 	count = 0;
// 	while (count < size)
// 	{
// 		ft_putnbr(nbr[count]);
// 		count++;
// 	}
// }
