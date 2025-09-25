/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 10:49:12 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/07 16:39:36 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// void	ft_putchar(char c);
// void	ft_output(long n);
// void	ft_putnbr(int nb);

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
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
// 	char	*ptr;
// 	char	str[6];
// 	int		i;

// 	ptr = str;
// 	ptr = "Hello";
// 	i = ft_strlen(ptr);
// 	ft_putnbr(i);
// }
