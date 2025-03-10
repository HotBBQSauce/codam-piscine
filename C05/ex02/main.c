/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   main.c                                              :+:    :+:           */
/*                                                      +:+                   */
/*   By: dguliev <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/03/10 18:30:54 by dguliev        #+#    #+#                */
/*   Updated: 2025/03/10 19:01:00 by dguliev        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	int	nb;
	int	power;

	nb = 3;
	power = 3;
	printf("%d^%d = %d", nb, power, ft_iterative_power(nb, power));
	return (0);
}
