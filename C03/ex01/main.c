/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dguliev <dguliev@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/05 15:54:33 by dguliev       #+#    #+#                 */
/*   Updated: 2025/03/05 15:55:27 by dguliev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "Hallo";
	s2 = "Hallo";
	printf("strcmp result: %d\n", strncmp(s1, s2, 1));
	printf("ft_strcmp result: %d\n", ft_strncmp(s1, s2, 1));
	return (0);
}
