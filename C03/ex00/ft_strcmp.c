/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dguliev <dguliev@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/27 12:39:14 by dguliev       #+#    #+#                 */
/*   Updated: 2025/03/05 15:52:31 by dguliev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int		result;
	int		count;

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
