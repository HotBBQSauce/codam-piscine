#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char buffer[255] = "YOLO";
	char *src = "LMAO";

	ft_strncat(buffer, src, 3);
	printf("Result: %s\n", buffer);
	return (0);
}