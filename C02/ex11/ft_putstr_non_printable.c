/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_non_printable.c                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dguliev <dguliev@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/04 13:07:34 by dguliev       #+#    #+#                 */
/*   Updated: 2025/03/05 14:32:39 by dguliev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	char_to_hex(char c, char hex_str[3])
{
	char	*base;

	base = "0123456789abcdef";
	hex_str[0] = base[c / 16];
	hex_str[1] = base[c % 16];
	hex_str[2] = '\0';
	return ;
}

void	write_hex(int count, char hex_str[3])
{
	write(1, "\\", 1);
	while (hex_str[count])
	{
		write(1, (&hex_str[count]), 1);
		count++;
	}
}

void	ft_putstr_non_printable(char *str)
{
	char	hex_str[3];
	int		count;

	while (*str)
	{
		if (!(*str >= 0 && *str <= 31) || (*str == 127))
		{
			write(1, str, 1);
			str++;
		}
		else
		{
			count = 0;
			char_to_hex(*str, hex_str);
			write_hex(count, hex_str);
			str++;
		}
	}
}
