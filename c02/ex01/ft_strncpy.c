/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:00:22 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/08 16:02:45 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	dest[6];
// 	char	src[] = "Hello";

// 	printf("%s\n", dest);
// 	printf("%s\n", src);
// 	printf("%s\n", ft_strncpy(dest, src, 6));
// 	printf("%s\n", src);
// }
