/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_fibonacci.c                                      :+:    :+:           */
/*                                                      +:+                   */
/*   By: dguliev <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/03/10 19:13:15 by dguliev        #+#    #+#                */
/*   Updated: 2025/03/10 19:27:57 by dguliev        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
