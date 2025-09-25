/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 09:53:23 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/17 14:48:04 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_search(char find, char *base);
int	ft_check(char *base);

int	ft_atoi_base(char *str, char *base)
{
	int	length;
	int	i;
	int	j;

	length = 0;
	i = 1;
	j = 0;
	while (base[length])
		length++;
	if (ft_check(base) != 0)
		return (0);
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			i *= -1;
		str++;
	}
	while (ft_search(*str, base) >= 0)
	{
		j *= length;
		j += ft_search(*(str++), base);
	}
	return (i * j);
}

int	ft_search(char find, char *base)
{
	int	count;

	count = 0;
	if (find == '\0')
		return (-1);
	while (base[count])
	{
		if (find == base[count])
			return (count);
		count++;
	}
	return (-1);
}

int	ft_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (-1);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ' || (base[i] >= 9
				&& base[i] <= 13))
			return (-1);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (-1);
			j++;
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "   ---+--+1234ab567";
// 	char	base[] = "012	34a6789";

// 	printf("%d", ft_atoi_base(str, base));
// }
