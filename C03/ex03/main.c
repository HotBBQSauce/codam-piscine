
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char buffer[255] = "Hello";
	char *src = "World";

	char buffer1[255] = "Hello";
	char *src1 = "World";

	ft_strncat(buffer, src, 10);
	printf("Result: %s\n", buffer);
	strncat(buffer1, src1, 10);
	printf("Result: %s\n", buffer1);
	return (0);
}