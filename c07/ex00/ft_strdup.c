/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:49:29 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/18 13:21:51 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		length;
	int		i;

	i = 0;
	length = 0;
	while (src[length])
		length++;
	dup = (char *)malloc(sizeof(char) * length);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	src[] = "Hello";
// 	char	*dup;

// 	dup = ft_strdup(src);
// 	printf("%s\n", dup);
// 	free(dup);
// 	return (0);
// }
