
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*f;

	while (*str)
	{
		s = str;
		f = to_find;
		while (*s && *f && (*s == *f))
		{
			s++;
			f++;
		}
		if (*f == '\0')
			return (str);
		str++;
	}
	return (NULL);
}
