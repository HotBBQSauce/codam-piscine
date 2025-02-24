/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_div_mod.c                               :+:    :+:           */
/*                                                     +:+                    */
/*   By: dguliev <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/24 14:29:58 by dguliev       #+#    #+#                 */
/*   Updated: 2025/02/24 14:39:49 by dguliev        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a_temp;

	a_temp = *a / *b;
	*b = *a % *b;
	*a = a_temp;
}

// int	main(void)
// {
// 	int a;
// 	int b;
//	
// 	a = 7;
// 	b = 2;
// 	ft_ultimate_div_mod(&a, &b);
// 	return (0);
// }
