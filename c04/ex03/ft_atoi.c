/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 13:54:08 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/14 09:20:00 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_nbr(char *str);

int	ft_atoi(char *str)
{
	int	i;
	int	j;

	i = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			i *= -1;
		str++;
	}
	j = ft_nbr(str);
	return (i * j);
}

int	ft_nbr(char *str)
{
	int	nbr;

	nbr = 0;
	while (*str >= '0' && *str <= '9')
	{
		nbr = nbr * 10;
		nbr = nbr + (*str - 48);
		str++;
	}
	return (nbr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "   ---+--+1234ab567";

// 	printf("%d", ft_atoi(str));
// }
