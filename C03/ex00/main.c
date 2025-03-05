/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dguliev <dguliev@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/05 15:53:26 by dguliev       #+#    #+#                 */
/*   Updated: 2025/03/05 15:55:15 by dguliev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "Halll";
	s2 = "Hall";
	printf("strcmp result: %d\n", strcmp(s1, s2));
	printf("ft_strcmp result: %d\n", ft_strcmp(s1, s2));
	return (0);
}
