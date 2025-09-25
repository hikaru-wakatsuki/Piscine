/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 10:20:41 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/12 10:24:39 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (2);
	while (i < nb / 2 + 1)
	{
		if (nb % i == 0)
			return (ft_find_next_prime(nb + 1));
		i++;
	}
	return (nb);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	nb[] = {-1, 0, 1, 2, 3, 4, 12, 37, 1764};
// 	int	count;

// 	count = 0;
// 	while (count < 9)
// 	{
// 		printf("%s", "[");
// 		printf("%d", nb[count]);
// 		printf("%s", "]");
// 		printf("%d\n", ft_find_next_prime(nb[(count++)]));
// 	}
// }
