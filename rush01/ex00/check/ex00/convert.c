/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 11:22:11 by takando           #+#    #+#             */
/*   Updated: 2025/09/14 20:52:13 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	convert_int_list(int *dest, char *str, int size);
int	char_to_int(char c);
int	split_string(char *dest, char *str, int size);

/*
return value
1 : normal
0 : error
*/
int	convert_int_list(int *dest, char *str, int size)
{
	int		i;
	char	chr_list[81];

	i = 0;
	split_string(chr_list, str, size);
	while (i < size)
	{
		dest[i] = char_to_int(chr_list[i]);
		if (dest[i] == -1)
			return (0);
		i++;
	}
	return (1);
}

/*
return value
0~9 : normal
-1 : error
*/
int	char_to_int(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	return (-1);
}

/*
return value
1 : normal
0 : error
*/
int	split_string(char *dest, char *str, int size)
{
	int	i;
	int	d_idx;

	i = 0;
	d_idx = 0;
	while (str[i] && d_idx < size)
	{
		if (str[i] >= '1' && str[i] <= '9')
		{
			dest[d_idx] = str[i];
			d_idx++;
		}
		i++;
	}
	if (size == 0 || d_idx != size - 1)
		return (0);
	return (1);
}
