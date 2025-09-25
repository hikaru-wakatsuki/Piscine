/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 10:30:29 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/10 21:55:51 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_length(char *src);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	strlen;
	unsigned int	destlen;
	unsigned int	i;

	strlen = ft_length(src);
	destlen = ft_length(dest);
	i = size - destlen - 1;
	dest += destlen;
	if (size > destlen)
	{
		while (i > 0 && *src)
		{
			*(dest++) = *(src++);
			i--;
		}
		*dest = '\0';
		return (strlen + destlen);
	}
	else
		return (strlen + size);
}

unsigned int	ft_length(char *src)
{
	int	count;

	count = 0;
	while (src[count])
		count++;
	return (count);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	dest[10] = "ABCD";
// 	char	src[] = "EF";

// 	printf("%s\n", dest);
// 	printf("%s\n", src);
// 	printf("%d\n", ft_strlcat(dest, src, 7));
// 	printf("%s\n", dest);
// 	printf("%s\n", src);
// }
