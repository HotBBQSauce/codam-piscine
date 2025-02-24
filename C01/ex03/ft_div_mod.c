/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_div_mod.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dguliev <dguliev@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/24 12:34:01 by dguliev       #+#    #+#                 */
/*   Updated: 2025/02/24 14:42:04 by dguliev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	div;
// 	int	mod;
//
// 	a = 10;
// 	b = 6;
// 	ft_div_mod(a, b, &div, &mod);
//printf("Number %d divided by: %d = %d with remainder %d", a, b, div, mod);
// 	return (0);
// }