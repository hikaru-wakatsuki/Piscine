/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 09:16:15 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/10 11:15:53 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count;
	unsigned int	count2;

	count = 0;
	count2 = 0;
	while (dest[count])
		count++;
	while (count2 < nb && src[count2] != '\0')
	{
		dest[count] = src[count2];
		count++;
		count2++;
	}
	dest[count] = '\0';
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	dest[] = "ABC";
// 	char	src[] = "DEF";

// 	printf("%s", ft_strncat(dest, src, 2));
// }
