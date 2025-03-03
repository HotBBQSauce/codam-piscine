/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dguliev <dguliev@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/01 15:57:43 by dguliev       #+#    #+#                 */
/*   Updated: 2025/03/01 16:13:35 by dguliev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	rush01(char *str, char *buffer);

int	main(int argc, char* argv[])
{
	char buffer[16];

	printf("Program name is: %s\n", argv[0]);

	if (argc == 1)
		printf("No Extra Command Line Argument Passed\n");

	rush01(argv[1], buffer);

	return (0);
}
