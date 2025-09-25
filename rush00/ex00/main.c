/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/06 10:47:22 by rkondo            #+#    #+#             */
/*   Updated: 2025/09/07 14:00:42 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush00(int x, int y);
void	rush01(int x, int y);
void	rush02(int x, int y);
void	rush03(int x, int y);
void	rush04(int x, int y);
void	rush_versions(char version, int x, int y);

int	main(int argc, char *argv[])
{
	char	*version;

	version = "4";
	if (argc > 1)
	{
		if (
			argv[1][0] >= '0'
			&& argv[1][0] <= '4'
			&& argv[1][1] == '\0'
			&& argc == 2
		)
		{
			version = argv[1];
		}
		else
		{
			return (1);
		}
	}
	rush_versions(*version, 5, 5);
	return (0);
}

void	rush_versions(char version, int x, int y)
{
	if (version == '0')
	{
		rush00(x, y);
	}
	else if (version == '1')
	{
		rush01(x, y);
	}
	else if (version == '2')
	{
		rush02(x, y);
	}
	else if (version == '3')
	{
		rush03(x, y);
	}
	else if (version == '4')
	{
		rush04(x, y);
	}
}
