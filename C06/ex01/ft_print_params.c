/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_params.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: dguliev <dguliev@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/05 19:16:35 by dguliev       #+#    #+#                 */
/*   Updated: 2025/03/05 19:22:45 by dguliev       ########   odam.nl         */
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

void	print_arguments(char*argv[])
{
	int	count;

	count = 1;
	while (argv[count])
	{
		print_string(argv[count]);
		count++;
	}
	return ;
}

int	main(int argc, char*argv[])
{
	if (argc > 0)
		print_arguments(argv);
	return (0);
}
