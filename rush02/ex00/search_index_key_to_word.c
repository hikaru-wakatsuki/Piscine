/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_index_key_to_word.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 17:48:58 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/21 17:04:26 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*search_index_key_to_value(char *nbr, t_dict *dict)
{
	int	i;

	i = 0;
	while (dict[i].key)
	{
		if (ft_strcmp(dict[i].key, nbr) == 0)
			return (dict[i].value);
		i++;
	}
	return (NULL);
}

int	search_key_match(char *nbr, t_dict *dict)
{
	int	i;

	i = 0;
	while (dict[i].key)
	{
		if (ft_strcmp(dict[i].key, nbr) == 0)
			return (1);
		i++;
	}
	return (0);
}
