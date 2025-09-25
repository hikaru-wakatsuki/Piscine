/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_para_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: takando <takando@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 13:39:02 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/14 16:15:40 by takando          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
return value
1 : normal
0 : error
*/
int	ft_para_check(char *str, int size)
{
	int	i;

	i = 0;
	if (str[size * 8 - 1] != '\0')
		return (0);
	while (str[i])
	{
		if (i % 2 == 0 && !(str[i] >= '1' && str[i] <= '9'))
			return (0);
		if (i % 2 == 1 && !(str[i] == ' '))
			return (0);
		i++;
	}
	return (1);
}
