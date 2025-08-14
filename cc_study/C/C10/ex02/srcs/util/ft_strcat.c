char	*ft_strcat(char *dest, char *src)
{
	int	n;
	int	i;

	i = 0;
	n = 0;
	while (dest[i])
		i++;
	while (src[n])
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = 0;
	return (dest);
}
