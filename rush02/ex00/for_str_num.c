/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_str_num.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmuramat <kmuramat@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 14:10:54 by kmuramat          #+#    #+#             */
/*   Updated: 2025/09/21 21:58:16 by kmuramat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*over_thousand(int quotient, char *hundred, char *ten, char *one)
{
	int		i;
	char	*p;

	i = 1;
	p = malloc(sizeof(char) * ((quotient - 1) * 3) + 2);
	if (p == NULL)
		return (NULL);
	if (quotient <= 1 || ((hundred == NULL) && (ten == NULL) && (one == NULL)))
	{
		free(p);
		return (NULL);
	}
	if (quotient > 1)
	{
		p[0] = '1';
		while (i <= ((quotient - 1) * 3))
		{
			p[i] = '0';
			i++;
		}
	}
	p[i] = '\0';
	return (p);
}

char	*hundred(char *digit_multiple3, int j)
{
	char	*s;

	s = malloc(sizeof(char) * 2);
	if (digit_multiple3[j] == '0' || s == NULL)
	{
		if (digit_multiple3[j + 1] == '0')
			free(s);
		return (NULL);
	}
	if (('1' <= digit_multiple3[j]) && (digit_multiple3[j] <= '9'))
	{
		s[0] = digit_multiple3[j];
		s[1] = '\0';
	}
	return (s);
}

char	*hund_place(char *digit_multiple3, int j)
{
	char	*s;

	s = malloc(sizeof(char) * 4);
	if (s == NULL || digit_multiple3[j] == '0')
	{
		if (digit_multiple3[j] == '0')
			free(s);
		return (NULL);
	}
	if (('1' <= digit_multiple3[j]) && (digit_multiple3[j] <= '9'))
	{
		s[0] = '1';
		s[1] = '0';
		s[2] = '0';
		s[3] = '\0';
	}
	return (s);
}

char	*ten(char *digit_multiple3, int j)
{
	char	*t;

	t = malloc(sizeof(char) * 3);
	if (digit_multiple3[j + 1] == '0' || t == NULL)
	{
		if (digit_multiple3[j + 1] == '0')
			free(t);
		return (NULL);
	}
	if ((digit_multiple3[j + 1] == '1') && (('1' <= digit_multiple3[j + 2])
			&& (digit_multiple3[j + 2] <= '9')))
	{
		t[0] = digit_multiple3[j + 1];
		t[1] = digit_multiple3[j + 2];
		t[2] = '\0';
		return (t);
	}
	else if (('1' <= digit_multiple3[j + 1]) && (digit_multiple3[j + 1] <= '9'))
	{
		t[0] = digit_multiple3[j + 1];
		t[1] = '0';
		t[2] = '\0';
		return (t);
	}
	return (t);
}

char	*one(char *digit_multiple3, int j)
{
	char	*u;

	u = malloc(sizeof(char) * 2);
	if (u == NULL || ((digit_multiple3[j + 2] == '0') || ((digit_multiple3[j
						+ 1] == '1') && (('1' <= digit_multiple3[j + 2])
					&& (digit_multiple3[j + 2] <= '9')))))
	{
		if ((digit_multiple3[j + 2] == '0') || ((digit_multiple3[j + 1] == '1')
				&& (('1' <= digit_multiple3[j + 2]) && (digit_multiple3[j
							+ 2] <= '9'))))
			free(u);
		return (NULL);
	}
	if (!(digit_multiple3[j + 1] == '1') && (('1' <= digit_multiple3[j + 2])
			&& (digit_multiple3[j + 2] <= '9')))
	{
		u[0] = digit_multiple3[j + 2];
		u[1] = '\0';
	}
	return (u);
}
