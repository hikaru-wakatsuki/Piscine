/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 18:48:18 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/18 19:18:17 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	length;
	int	i;

	length = max - min;
	if (length <= 0)
	{
		range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * length);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < length)
		(*range)[(i++)] = (min++);
	return (length);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int		min;
// 	int		max;
// 	int		*box;
// 	int	i;
// 	int	length;

// 	min = -25;
// 	max = 25;
// 	i = 0;
// 	length = ft_ultimate_range(&box, min, max);
// 	while (i < length)
// 	{
// 		printf("%d\n", (box)[i]);
// 		i++;
// 	}
// 	free(box);
// 	return (0);
// }
