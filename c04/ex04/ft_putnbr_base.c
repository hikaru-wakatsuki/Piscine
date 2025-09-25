/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 17:58:44 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/14 09:22:09 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
long	ft_sign(long i);
int		ft_check(char *base);
int		ft_length(char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int		length;
	long	i;

	i = nbr;
	length = ft_length(base);
	if (ft_check(base) != 0)
		return ;
	i = ft_sign(i);
	if (i > length)
		ft_putnbr_base(i / length, base);
	else
	{
		if (i / length != 0)
			ft_putchar(base[i / length]);
	}
	ft_putchar(base[i % length]);
}

long	ft_sign(long i)
{
	if (i < 0)
	{
		i *= -1;
		ft_putchar('-');
	}
	return (i);
}

int	ft_length(char *base)
{
	int	length;

	length = 0;
	while (base[length])
		length++;
	return (length);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (1);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	int		nbr = -6;
// 	char	base[] = "01";

// 	ft_putnbr_base(nbr, base);
// }
