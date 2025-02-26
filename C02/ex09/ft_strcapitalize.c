/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcapitalize.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: dguliev <dguliev@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/26 16:04:35 by dguliev       #+#    #+#                 */
/*   Updated: 2025/02/26 18:56:28 by dguliev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	index;

	index = 0;
	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str[0] - 32;
	while (str[index] != '\0')
	{
		index++;
		if (str[index] >= 32 && str[index] <= 47)
		{
			if (str[index + 1] >= 97 && str[index + 1] <= 122)
				str[index + 1] = str[index + 1] - 32;
		}

		if (str[index - 1] >= 'A' && str[index - 1] <= 'Z')
		{
			while (str[index] != ' ')
			{
				str[index] += 32;
			}

		}


	}

	return (str);
}

int	main(void)
{
	char string[] = "SALUT";
	printf("%s", ft_strcapitalize(string));
	return (0);
}
