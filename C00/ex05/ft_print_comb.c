/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: dguliev <dguliev@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/20 18:12:34 by dguliev       #+#    #+#                 */
/*   Updated: 2025/02/24 12:20:08 by dguliev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_digits(char first_digit, char second_digit, char third_digit)
{
	ft_putchar(first_digit);
	ft_putchar(second_digit);
	ft_putchar(third_digit);
	if (!(first_digit == '7' && second_digit == '8'
			&& third_digit == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char	first_digit;
	char	second_digit;
	char	third_digit;

	first_digit = '0';
	while (first_digit <= '9')
	{
		second_digit = first_digit + 1;
		while (second_digit <= '8')
		{
			third_digit = second_digit + 1;
			while (third_digit <= '9')
			{
				ft_print_digits(first_digit, second_digit, third_digit);
				third_digit++;
			}
			second_digit++;
		}
		first_digit++;
	}
}

// int main(void)
// {	
// 	ft_print_comb();
// 	return (0);
// }
