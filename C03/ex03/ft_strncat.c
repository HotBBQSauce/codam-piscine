char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count;

	while (*dest)
		dest++;
	count = 0;
	while ((*src && (count < nb)))
	{
		*dest++ = *src++;
		count++;
	}
	*dest = '\0';
	return (dest);
}
