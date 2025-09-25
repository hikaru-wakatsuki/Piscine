/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 09:22:04 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/12 09:38:13 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	i;

	i = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	i = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	index[]={-1, 0, 1, 2, 3, 4, 5, 6, 7};
// 	int	count;

// 	count = 0;
// 	while (count < 9)
// 	{
// 		printf("%s", "[");
// 		printf("%d", index[count]);
// 		printf("%s", "]");
// 		printf("%d\n", ft_fibonacci(index[count]));
// 		count++;
// 	}
// }
