/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dguliev <dguliev@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/05 15:54:38 by dguliev       #+#    #+#                 */
/*   Updated: 2025/03/05 16:06:21 by dguliev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	*buffer;
	char	*buffer1;
	char	*src;
	char	*src1;

	buffer = "Hello";
	buffer1 = "Hello";
	src = "World";
	src1 = "World";
	ft_strncat(buffer, src, 10);
	printf("Result of running ft_strncat: %s\n", buffer);
	strncat(buffer1, src1, 10);
	printf("Result of running strncat: %s\n", buffer1);
	return (0);
}
