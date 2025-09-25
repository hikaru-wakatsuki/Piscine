/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_is_valid.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotakaha <kotakaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 12:45:58 by kotakaha          #+#    #+#             */
/*   Updated: 2025/09/21 13:21:31 by kotakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_number_is_valid(char *number)
{
	int	i;

	if (!number || number[0] == '\0')
		return (0);
	if (number[0] == '0' && number[1] != '\0')
		return (0);
	i = 0;
	while (number[i] != '\0')
	{
		if (number[i] < '0' || number[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
