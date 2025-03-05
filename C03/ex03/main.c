/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dguliev <dguliev@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/05 15:54:38 by dguliev       #+#    #+#                 */
/*   Updated: 2025/03/05 17:03:55 by dguliev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	buffer[25] = "Hello";
	char	buffer1[25] = "Hello";
	char	src[7] = "World";
	char	src1[7] = "World";

	ft_strncat(buffer, src, 15);
	printf("Result of running ft_strncat: %s\n", buffer);
	strncat(buffer1, src1, 15);
	printf("Result of running strncat: %s\n", buffer1);
	return (0);
}
