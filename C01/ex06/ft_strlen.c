/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dguliev <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/24 14:59:30 by dguliev       #+#    #+#                 */
/*   Updated: 2025/02/24 15:28:58 by dguliev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

// int	main(void)
// {
// 	int	strlength;

// 	strlength = ft_strlen("lol");
// 	printf("String has length of: %d", strlength);
// 	return (0);
// }
