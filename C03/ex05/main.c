#include <stdio.h>
#include <bsd/string.h>

char	*ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char buffer[255] = "YOLO";
	char *src = "LMAO";
	char buffer2[255] = "YOLO";
	char *src2 = "LMAO";

	ft_strlcat(buffer, src, 4);
	printf("ft_strlcat result: %s\n", buffer);
	strlcat(buffer2, src2, 4);
	printf("strlcat result: %s\n", buffer2);

	return (0);
}