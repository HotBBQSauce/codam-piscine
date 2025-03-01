
#include <stdio.h>

int	main(void)
{
	char dest[255] = "VU"; // Large enough to hold "VUyolo"
	char *src = "";
	printf("%s\n", ft_strcat(dest, src)); // Expected output: "VUyolo"
	return (0);
}