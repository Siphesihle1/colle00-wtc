/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smthethw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/12 14:23:32 by smthethw          #+#    #+#             */
/*   Updated: 2020/01/12 15:45:47 by smthethw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	disp_edge(int j, int x, char a) // For the top and bottom edges
{
	if (j == 0) // First column
	{
		ft_putchar(a);
	}
	else if (j > 0 && j < x - 1) // In between first and last column
	{
		ft_putchar('B');
	}
	else // last column
	{
		ft_putchar(a);
	}
}


void	disp_bt(int j, int x) // In between the top and bottom edges
{
	if (j == 0) // First  column
	{
		ft_putchar('B');
	}
	else if (j > 0 && j < x - 1) // In between first and last column
	{
		ft_putchar(' ');
	}
	else //last column
	{
		ft_putchar('B');
	}
}

void	disp(int i, int j, int x, int y)
{
	if (i == 0) // First row
	{
		disp_edge(j, x, 'A');
	}		
	else if (i > 0 && i < y - 1) // In between first and last row
	{
		disp_bt(j, x);
	} 
	else // last row
	{
		disp_edge(j, x, 'C');
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
			disp(i, j, x, y); // displaying to the terminal
			j++; // updating column count
		}
		i++; // updating row count
		ft_putchar('\n'); // new line
	}
}
