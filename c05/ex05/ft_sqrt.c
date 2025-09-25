/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 09:38:59 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/12 10:00:10 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i < nb / 2 + 2)
	{
		if (nb == i * i)
			return (i);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	nb[] = {-1, 0, 1, 2, 3, 4, 25, 36, 1764};
// 	int	count;

// 	count = 0;
// 	while (count < 9)
// 	{
// 		printf("%s", "[");
// 		printf("%d", nb[count]);
// 		printf("%s", "]");
// 		printf("%d\n", ft_sqrt(nb[(count++)]));
// 	}
// }
