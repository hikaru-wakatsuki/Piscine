/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 09:33:37 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/10 11:34:07 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

char	*ft_strstr(char *str, char *to_find)
{
	int	count;

	count = 0;
	if (to_find[count] == '\0')
		return (str);
	while (to_find[count])
		count++;
	while (*str)
	{
		if (ft_strncmp(to_find, str, count) == 0)
			return (str);
		str++;
	}
	return (0);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n && (s1[count] != '\0' || s2[count] != '\0'))
	{
		if (s1[count] != s2[count])
			return (s1[count] - s2[count]);
		count++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	str[] = "ABCDE";
// 	char	to_find[] = "CD";

// 	printf("%s\n", ft_strstr(str, to_find));
// 	printf("%s\n", strstr(str, to_find));
// }
