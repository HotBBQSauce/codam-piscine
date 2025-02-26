/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_lowercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: dguliev <dguliev@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/26 15:21:24 by dguliev       #+#    #+#                 */
/*   Updated: 2025/02/26 15:33:11 by dguliev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!(str[index] >= 97 && str[index] <= 122))
			return (0);
		index++;
	}
	return (1);
}

// int	main(void)
// {
// 	int	result;

// 	result = ft_str_is_lowercase("testingstring");
// 	printf("Return value: %d", result);
// 	return (0);
// }
