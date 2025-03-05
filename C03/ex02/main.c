/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dguliev <dguliev@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/05 15:54:35 by dguliev       #+#    #+#                 */
/*   Updated: 2025/03/05 16:05:21 by dguliev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char		*dest;
	char		*src;

	dest = "VU";
	src = "yolo";
	printf("%s\n", ft_strcat(dest, src));
	return (0);
}
