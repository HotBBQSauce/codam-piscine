/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_params.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: dguliev <dguliev@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/05 19:23:41 by dguliev       #+#    #+#                 */
/*   Updated: 2025/03/05 19:30:46 by dguliev       ########   odam.nl         */
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

void	print_arguments_reverse(int argc, char*argv[])
{
	int	count;

	count = argc - 1;
	while (count != 0)
	{
		print_string(argv[count]);
		count--;
	}
	return ;
}

int	main(int argc, char*argv[])
{
	if (argc > 0)
		print_arguments_reverse(argc, argv);
	return (0);
}
