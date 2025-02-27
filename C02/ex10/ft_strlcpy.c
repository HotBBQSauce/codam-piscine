/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dguliev <dguliev@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/27 12:09:33 by dguliev       #+#    #+#                 */
/*   Updated: 2025/02/27 12:30:37 by dguliev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// Get length without null terminator.
// Copy src into dest - 1 (the last character \0)
// Append \0 as last char to dest[last]; 

// #include <stdio.h>

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	src_length;

	src_length = 0;
	while (src[src_length] != '\0')
	{
		src_length++;
	}
	if (size == 0)
	{
		return (src_length);
	}
	index = 0;
	while (index < size - 1 && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (src_length);
}

// int	main(void)
// {
// 	char	src[] = "Hello, World!";
// 	char	dest[12];
// 	unsigned int	copied_len = ft_strlcpy(dest, src, sizeof(dest));
// 	printf("Copied string: %s\n", dest);  
// 	printf("Original length: %u\n", copied_len);
// 	return 0;
// }
