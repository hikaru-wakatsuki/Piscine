/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 16:30:50 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/18 22:59:48 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	length;
	int	i;
	int	*box;

	i = 0;
	length = max - min;
	if (length <= 0)
		return (NULL);
	box = (int *)malloc(sizeof(int) * length);
	while (i < length)
		box[(i++)] = (min++);
	return (box);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int		min;
// 	int		max;
// 	int	length;
// 	int		*box;
// 	int		i;

// 	min = 3;
// 	max = 30;
// 	length = max - min;
// 	box = ft_range(min, max);
// 	i = 0;
// 	while (length > 0)
// 	{
// 		printf("%d\n", box[(i++)]);
// 		length--;
// 	}
// 	free(box);
// 	return (0);
// }
