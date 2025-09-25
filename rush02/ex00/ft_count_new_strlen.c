/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_new_strlen.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kotakaha <kotakaha@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 11:35:45 by kotakaha          #+#    #+#             */
/*   Updated: 2025/09/21 13:19:54 by kotakaha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_new_strlen(int len)
{
	int	add_zero;
	int	new_strlen;

	add_zero = (3 - (len % 3)) % 3;
	new_strlen = len + add_zero;
	return (new_strlen);
}
