/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_iterative_factorial.c                            :+:    :+:           */
/*                                                      +:+                   */
/*   By: dguliev <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/03/10 18:10:11 by dguliev        #+#    #+#                */
/*   Updated: 2025/03/10 19:02:08 by dguliev        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	start;
	int	result;

	result = 1;
	start = 2;
	if (nb == 0)
		return (result);
	if (nb < 0)
		return (0);
	while (start <= nb)
	{
		result *= start;
		start++;
	}
	return (result);
}
