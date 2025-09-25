/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 19:35:47 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/08 09:28:49 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// char	*ft_strcpy(char *dest, char *src);

// int	main(void)
// {
// 	char	*ptr1;
// 	char	*ptr2;
// 	char	str1[6] = "Hello";
// 	char	str2[6];

// 	ptr1 = str1;
// 	ptr2 = str2;
// 	printf("%s\n", str1);
// 	printf("%s\n", str2);
// 	ptr2 = ft_strcpy(ptr2, ptr1);
// 	printf("%s\n", str1);
// 	printf("%s\n", str2);
// }

char	*ft_strcpy(char *dest, char *src)
{
	int		count;

	count = 0;
	while (src[count])
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
