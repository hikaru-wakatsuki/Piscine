/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 12:24:46 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/24 17:10:02 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		length;
	int		i;

	i = 0;
	length = 0;
	while (src[length])
		length++;
	dup = (char *)malloc(sizeof(char) * length);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	ft_strlen(char *base)
{
	int	length;

	length = 0;
	while (base[length])
		length++;
	return (length);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*info;
	int			i;

	info = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!info)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		info[i].size = ft_strlen(av[i]);
		info[i].str = av[i];
		info[i].copy = ft_strdup(av[i]);
		if (!info->copy)
		{
			while (i > 0)
			{
				free(info[i].copy);
				i--;
			}
			free(info);
			return (NULL);
		}
		i++;
	}
	return (info);
}
