/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dguliev <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 17:53:12 by dguliev       #+#    #+#                 */
/*   Updated: 2025/03/10 19:08:54 by dguliev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
