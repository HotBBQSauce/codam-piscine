/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dguliev <dguliev@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/26 13:54:31 by dguliev       #+#    #+#                 */
/*   Updated: 2025/02/26 14:12:09 by dguliev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	src[] = "Hello world!"; 
// 	char	dest[20];
// 	unsigned int	n;

// 	n = 25;

// 	printf("Moving '%s' into dest\n", src);
// 	ft_strncpy(dest, src, n);
// 	printf("source: '%s'\ndestination: '%s'\n",src,dest);
// 	return (0);
// }