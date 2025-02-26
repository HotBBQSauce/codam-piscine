/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: dguliev <dguliev@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/26 15:40:04 by dguliev       #+#    #+#                 */
/*   Updated: 2025/02/26 15:44:55 by dguliev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (!(str[index] >= 32 && str[index] <= 126))
			return (0);
		index++;
	}
	return (1);
}
