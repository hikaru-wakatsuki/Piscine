/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 19:07:13 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/18 22:59:19 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_search(char find, char *base);
int		ft_check(char *base);
int		ft_strlen(char *base);

long	ft_atoi_base(char *str, char *base)
{
	int		length;
	long	i;
	long	j;

	i = 1;
	j = 0;
	length = ft_strlen(base);
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

int	ft_strlen(char *base)
{
	int	length;

	length = 0;
	while (base[length])
		length++;
	return (length);
}
