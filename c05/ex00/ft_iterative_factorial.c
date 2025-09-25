/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:42:23 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/12 09:21:56 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	ans;

	i = 1;
	ans = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i < nb)
	{
		ans *= nb - i;
		i++;
	}
	return (ans);
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
// 		printf("%d\n", ft_iterative_factorial(i[count]));
// 		count++;
// 	}
// }
