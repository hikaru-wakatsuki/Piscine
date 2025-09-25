/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 16:01:12 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/08 20:59:13 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'A' || str[i] > 'z')
			|| (str[i] < 'a' && str[i] > 'Z'))
			return (0);
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "abcde";
// 	char	str2[] = "abcd1";

// 	printf("%d\n",ft_str_is_alpha(str));
// 	printf("%d\n",ft_str_is_alpha(str2));
// }
