/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                            :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: dguliev <dguliev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:43:09 by dguliev           #+#    #+#             */
/*   Updated: 2025/02/23 18:49:02 by dguliev        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

void	ft_putchar(char c);

int	validate_input(int x, int y)
{
	if (x < 1 || y < 1)
	{
		return (1);
	}
	return (0);
}

void	check_condition(int col, int row, int y, int x)
{
	if (col == 0 && row == 0)
		ft_putchar('A');
	else if (col == 0 && row == x - 1)
		ft_putchar('C');
	else if (col == y - 1 && row == 0)
		ft_putchar('C');
	else if (col == y - 1 && row == x - 1)
		ft_putchar('A');
	else if (col == 0 || col == y - 1 || row == 0 || row == x - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	col;
	int	row;
	int	valid;

	col = 0;
	valid = validate_input(x, y);
	if (valid == 1)
		return ;
	while (col < y)
	{
		row = 0;
		while (row < x)
		{
			check_condition(col, row, y, x);
			row++;
		}
		ft_putchar('\n');
		col++;
	}
}
