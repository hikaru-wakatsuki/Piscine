/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 18:47:55 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/12 09:21:50 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	i *= ft_recursive_factorial(nb - 1);
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	i[] = {-1, 0, 1, 2, 3, 4, 5};
// 	int	count = 0;

// 	while (count < 7)
// 	{
// 		printf("%d", i[count]);
// 		printf("%s", "! =");
// 		printf("%d\n", ft_recursive_factorial(i[count]));
// 		count++;
// 	}
// }
