/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 20:20:56 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/18 22:59:08 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

long	ft_atoi_base(char *str, char *base);
int		ft_check(char *base);
int		ft_strlen(char *base);
void	input_base_to(long nbr_from, long length_to, char *base_to,
			char *convert_base);
int		count_digits(long nbr_from, long length_to);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	nbr_from;
	long	length_to;
	long	digits;
	char	*convert_base;

	if (ft_check(base_from) != 0 || ft_check(base_to) != 0)
		return (NULL);
	nbr_from = ft_atoi_base(nbr, base_from);
	length_to = ft_strlen(base_to);
	digits = count_digits(nbr_from, length_to);
	convert_base = (char *)malloc(sizeof(char) * digits + 1);
	input_base_to(nbr_from, length_to, base_to, convert_base);
	return (convert_base);
}

int	count_digits(long nbr_from, long length_to)
{
	int	i;

	i = 0;
	if (nbr_from == 0)
		return (1);
	if (nbr_from < 0)
	{
		nbr_from *= -1;
		i++;
	}
	while (nbr_from > 0)
	{
		nbr_from /= length_to;
		i++;
	}
	return (i);
}

void	input_base_to(long nbr_from, long length_to, char *base_to,
		char *convert_base)
{
	long	i;
	long	digits;
	long	div_from;

	digits = count_digits(nbr_from, length_to);
	div_from = nbr_from;
	if (nbr_from < 0)
	{
		div_from *= -1;
		convert_base[(0)] = '-';
	}
	if (nbr_from == 0)
		convert_base[(0)] = '0';
	i = digits;
	while (div_from > 0)
	{
		convert_base[(i - 1)] = base_to[div_from % length_to];
		div_from /= length_to;
		i--;
	}
	convert_base[digits] = '\0';
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	nbr[] = "   +----256a11230ab567";
// 	char	base_from[] = "0123456789";
// 	char	base_to[] = "0123456789abcdef";
// 	char	*convert_base;

// 	convert_base = ft_convert_base(nbr, base_from, base_to);
// 	printf("%s\n", convert_base);
// 	free(convert_base);
// }
