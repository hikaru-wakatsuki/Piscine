/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 16:40:34 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/07 18:01:46 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	count1;
	int	count2;
	int	temp;

	count1 = 0;
	count2 = 0;
	temp = 0;
	while (count1 < size - 1)
	{
		count2 = 0;
		while (count2 < size - 1)
		{
			if (tab[count2] > tab[count2 + 1])
			{
				temp = tab[count2];
				tab[count2] = tab[count2 + 1];
				tab [count2 + 1] = temp;
			}
			count2++;
		}
		count1++;
	}
}

// int	main(void)
// {
// 	int	*ptr;
// 	int	str[5] = {5, 4, 3, 2, 1};
// 	int	size;
// 	int	count;

// 	ptr = str;
// 	size = 5;
// 	count = 0;
// 	ft_sort_int_tab(ptr, 5);
// 	while (count < size)
// 	{
// 		printf("%d", str[count]);
// 		count++;
// 	}
// }
