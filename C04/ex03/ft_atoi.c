/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dguliev <marvin@42.fr>                       +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/03 17:35:54 by dguliev       #+#    #+#                 */
/*   Updated: 2025/03/06 14:26:17 by dguliev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	count_negative;
	int	i;
	int	result;

	count_negative = 0;
	i = 0;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			count_negative++;
		i++;
	}

	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (count_negative % 2 != 0)
		result *= -1;
	return (result);
}

