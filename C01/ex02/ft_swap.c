/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                           :+:    :+:           */
/*                                                    +:+ +:+         +:+     */
/*   By: dguliev <dguliev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 14:00:22 by dguliev           #+#    #+#             */
/*   Updated: 2025/02/22 14:11:25 by dguliev        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// int	main(void)
// {
// 	int a = 5, b = 10;
// 	printf("Before swap: x = %d, y = %d\n", a, b);
//
// 	ft_swap(&a, &b);
//	
// 	printf("After swap: x = %d, y = %d\n", a, b);
// 	return (0);
// }
