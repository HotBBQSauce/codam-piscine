/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_alpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: dguliev <dguliev@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/26 14:17:02 by dguliev       #+#    #+#                 */
/*   Updated: 2025/02/26 14:49:47 by dguliev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122) || (str[i] >= 64 && str[i] <= 90))
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
// 	char string[] = "yolo1";
//
// 	result = ft_str_is_alpha(string);
//
// 	if(result)
// 	{
// 		printf("%s has nummeric value.", string);
// 		return (2);
// 	}
// 	printf("%s has no nummeric value.", string);
// 	return (2);
// }
