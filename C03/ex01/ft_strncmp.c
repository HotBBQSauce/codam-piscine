/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dguliev <dguliev@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/27 17:39:21 by dguliev       #+#    #+#                 */
/*   Updated: 2025/02/27 18:15:08 by dguliev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int count = 0;

	while (count < n && s1[count] && s2[count])
	{
		if (s1[count] != s2[count])
			return (s1[count] - s2[count]);
		count++;
	}

	if (count < n)
		return (s1[count] - s2[count]);

	return (0);
}


// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;

// 	s1 = "Hallo";
// 	s2 = "Hallo";
// 	printf("strcmp result: %d\n", strncmp(s1, s2, 1));
// 	printf("ft_strcmp result: %d\n", ft_strncmp(s1, s2, 1));
// 	return (0);
// }