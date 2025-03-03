/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rush01.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dguliev <dguliev@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/01 14:17:04 by dguliev       #+#    #+#                 */
/*   Updated: 2025/03/01 16:38:07 by dguliev       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


void	print_cube(char *up, char *down, char *left, char *right)
{
	int	cube_size;
	int x;
	int y;
	
	cube_size = 4;
	x = 0;
	y = 0;
	// write(1, "Up: ", 4);
	// write(1, up, 4);
	// write(1, "\n", 1);

	// write(1, "Down: ", 6);
	// write(1, down, 4);
	// write(1, "\n", 1);

	// write(1, "Left: ", 6);
	// write(1, left, 4);
	// write(1, "\n", 1);

	// write(1, "Right: ", 7);
	// write(1, right, 4);
	// write(1, "\n", 1);

	while (x < cube_size && y < cube_size)
	{
		
	}




	return ;
}


void rush01(char *str, char *buffer)
{
	char	*buf_ptr = buffer;
	char	up[4];
	char	down[4];
	char	left[4];
	char	right[4];
	int	i;


	printf("Arguments received in rush01: %s\n", str);
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			*buf_ptr = *str;
			buf_ptr++;
		}
		str++;
	}
	*buf_ptr = '\0';
	i = 0;
	while (i < 4)
	{
		up[i] = buffer[i];
		down[i] = buffer[i + 4];
		left[i] = buffer[i + 8];
		right[i] = buffer[i + 12];
		i++;
	}
	print_cube(up, down, left, right);
}

