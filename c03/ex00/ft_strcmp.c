/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 18:13:51 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/09 12:49:16 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while ((s1[count] != '\0' && s2[count] != '\0') && s1[count] == s2[count])
		count++;
	return (s1[count] - s2[count]);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	s1[] = "abcd";
// 	char	s2[] = "abc";

// 	printf("%d\n", ft_strcmp(s1, s2));
// 	printf("%d\n", strcmp(s1, s2));
// 	return (0);
// }
