/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 14:23:32 by smthethw          #+#    #+#             */
/*   Updated: 2020/01/12 14:59:14 by smthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	disp(int j, int x, char a, char b)
{
	if (j == 0 || j == x - 1) // First or last column
	{
		ft_putchar(a);
	}
	else // In between first and last column
	{
		ft_putchar(b);
	}
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0; // Initiliasing counter variables
	j = 0;

	while (i < y)
	{
		j = 0; // Resetting column counter variable for new row 
		while (j < x)
		{
			if (i == 0 || i == y - 1) // First or last row
			{
				disp(j, x, 'o', '-');
			}		
			else // In between first and last row
			{
				disp(j, x, '|', ' ');
			}
			j++; // updating column count
		}
		i++; // updating row count
		ft_putchar('\n'); // new line
	}
}
