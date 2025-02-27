/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_alpha.c                                   :+:    :+:           */
/*                                                     +:+                    */
/*   By: dguliev <dguliev@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/26 14:17:02 by dguliev       #+#    #+#                 */
/*   Updated: 2025/02/27 17:07:51 by dguliev        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	int	result;
// 	char string[] = "YoLo";
// 	result = ft_str_is_alpha(string);
// 	if(result == 1)
// 	{
// 		printf("%s only alphabetic.", string);
// 		return (2);
// 	}
// 	printf("%s has other values.", string);
// 	return (2);
// }
