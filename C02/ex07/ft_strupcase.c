/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strupcase.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: dguliev <dguliev@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/26 15:45:49 by dguliev       #+#    #+#                 */
/*   Updated: 2025/02/26 16:01:38 by dguliev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 97 && str[index] <= 122)
			str[index] = str[index] - 32;
		index++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "testingstring";
// 	printf("%s", ft_strupcase(str));
// 	return (0);
// }
