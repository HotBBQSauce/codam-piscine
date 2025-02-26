/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_uppercase.c                               :+:    :+:           */
/*                                                     +:+                    */
/*   By: dguliev <dguliev@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/26 15:34:10 by dguliev       #+#    #+#                 */
/*   Updated: 2025/02/26 15:37:58 by dguliev        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!(str[index] >= 65 && str[index] <= 90))
			return (0);
		index++;
	}
	return (1);
}
