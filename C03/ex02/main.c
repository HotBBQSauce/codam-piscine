/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: dguliev <dguliev@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/05 15:54:35 by dguliev       #+#    #+#                 */
/*   Updated: 2025/03/05 17:32:14 by dguliev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	dest[3] = "VU";
	char	src[7] = "yolo";


	printf("%s\n", strcat(dest, src));
	printf("%s\n", ft_strcat(dest, src));

	return (0);
}
