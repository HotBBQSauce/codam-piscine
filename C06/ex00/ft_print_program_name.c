/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_program_name.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: dguliev <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/05 19:09:02 by dguliev       #+#    #+#                 */
/*   Updated: 2025/03/05 19:37:44 by dguliev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_string(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char*argv[])
{
	if (argc > 0)
		print_string(argv[0]);
	return (0);
}
