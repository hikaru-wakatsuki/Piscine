/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 10:03:27 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/12 10:19:31 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb / 2 + 1)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	nb[] = {-1, 0, 1, 2, 3, 4, 11, 37, 1764};
// 	int	count;

// 	count = 0;
// 	while (count < 9)
// 	{
// 		printf("%s", "[");
// 		printf("%d", nb[count]);
// 		printf("%s", "]");
// 		printf("%d\n", ft_is_prime(nb[(count++)]));
// 	}
// }
