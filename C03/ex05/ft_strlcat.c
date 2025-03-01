
char	*ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	count;

	while (*dest)
		dest++;
	count = 0;
	while (*src && count < size)
	{
		*dest++ = *src++;
		count++;
	}
	*dest = '\0';
	return (dest);
}