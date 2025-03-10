/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_recursive_power.c                                :+:    :+:           */
/*                                                      +:+                   */
/*   By: dguliev <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/03/10 18:52:58 by dguliev        #+#    #+#                */
/*   Updated: 2025/03/10 19:00:14 by dguliev        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power -1));
}
