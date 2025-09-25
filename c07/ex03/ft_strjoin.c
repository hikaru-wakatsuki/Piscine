/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 17:30:31 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/09/18 21:49:28 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *str);
void	ft_join(int size, char **strs, char *sep, char *strcat);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*strcat;
	int		length;
	int		i;

	length = 0;
	i = 0;
	if (size == 0)
	{
		strcat = (char *)malloc(sizeof(char) * 1);
		*strcat = '\0';
		return (strcat);
	}
	while (strs[i] && i < size)
	{
		length += ft_strlen(strs[i]);
		i++;
	}
	strcat = (char *)malloc(sizeof(char) * (ft_strlen(sep) * (size - 1)
				+ length + 1));
	strcat[0] = '\0';
	ft_join(size, strs, sep, strcat);
	return (strcat);
}

void	ft_join(int size, char **strs, char *sep, char *strcat)
{
	int		i;

	i = 0;
	while (strs[i] && i < size)
	{
		strcat = ft_strcat(strcat, strs[i]);
		if (i != size - 1)
			strcat = ft_strcat(strcat, sep);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int	count;
	int	count2;

	count = 0;
	count2 = 0;
	while (dest[count])
		count++;
	while (src[count2])
	{
		dest[count] = src[count2];
		count++;
		count2++;
	}
	dest[count] = '\0';
	return (dest);
}

// #include <stdio.h>

// int	main(int argc, char *argv[])
// {
// 	char	sep[3] = "!!";
// 	char	*strcat;

// 	strcat = ft_strjoin(argc, argv, sep);
// 	printf("%s\n", strcat);
// 	free(strcat);
// 	return (0);
// }
