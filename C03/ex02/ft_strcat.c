/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                         :+:    :+:           */
/*                                                     +:+                    */
/*   By: dguliev <dguliev@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/27 18:20:54 by dguliev       #+#    #+#                 */
/*   Updated: 2025/02/27 18:58:50 by dguliev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>


char	*ft_strcat(char *dest, char *src)
{
	int	count;
	int	count_src;
	
	count = 0;
	while (dest[count] != '\0')
		count++;
	count_src = 0;
	while (src[count_src] != '\0')
	{
		dest[count + count_src] = src[count_src];
		count_src++;
	}
	dest[count + count_src] = '\0';
	return (dest);
}


int	main(void)
{
	char dest[255] = "VU"; // Large enough to hold "VUyolo"
	char *src = "";
	printf("%s\n", ft_strcat(dest, src)); // Expected output: "VUyolo"
	return (0);
}
