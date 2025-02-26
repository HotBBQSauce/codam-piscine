/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dguliev <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/26 13:00:35 by dguliev       #+#    #+#                 */
/*   Updated: 2025/02/26 14:18:44 by dguliev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	src[] = "Hello world!"; 
// 	char	dest[20];
//
// 	printf("Moving '%s' into dest\n", src);
// 	ft_strcpy(dest, src);
// 	printf("source: '%s'\ndestination: '%s'\n",src,dest);
// 	return (0);
// }