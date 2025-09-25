/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 09:07:33 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/14 19:14:12 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i *= ft_recursive_power(nb, power - 1);
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	i[] = {-2, -1, 0, 1, 2, 3, 4, 5};
// 	int	count = 0;

// 	while (count < 7)
// 	{
// 		printf("%d", i[count]);
// 		printf("%s", "^");
// 		printf("%d", i[count + 1]);
// 		printf("%s", "=");
// 		printf("%d\n", ft_recursive_power(i[count], i[count + 1]));
// 		count++;
// 	}
// }
