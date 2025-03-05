/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dguliev <dguliev@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/05 18:50:16 by dguliev       #+#    #+#                 */
/*   Updated: 2025/03/05 18:50:43 by dguliev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	printf("\n%s\n", ft_strstr("This is banananana", "nana"));
	printf("\n%s\n", strstr("This is banananana", "nana"));
	printf("\n%s\n", ft_strstr("This is banananana", "AB"));
	printf("\n%s\n", strstr("This is banananana", "AB"));
	printf("\n%s\n", ft_strstr("00100100100", "100"));
	printf("\n%s\n", strstr("00100100100", "100"));
	printf("\n%s\n", ft_strstr("", "dsd"));
	printf("\n%s\n", strstr("", "dsd"));
	printf("\n%s\n", ft_strstr("", ""));
	printf("\n%s\n", strstr("", ""));
}