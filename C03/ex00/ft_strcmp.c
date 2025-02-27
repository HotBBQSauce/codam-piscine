/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dguliev <dguliev@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/27 12:39:14 by dguliev       #+#    #+#                 */
/*   Updated: 2025/02/27 18:57:53 by dguliev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	result;
	int	count;

	count = 0;
	result = 0;
	while (s1[count] != '\0')
	{
		if (s1[count] != s2[count])
		{
			return (s1[count] - s2[count]);
		}
		count++;
	}
	if (s2[count] != '\0')
		result -= s2[count];
	else if (s2[count] == '\0')
		result = 0;
	else
		result = 1;
	return (result);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;

// 	s1 = "Halll";
// 	s2 = "Hall";
// 	printf("strcmp result: %d\n", strcmp(s1, s2));
// 	printf("ft_strcmp result: %d\n", ft_strcmp(s1, s2));
// 	return (0);
// }
