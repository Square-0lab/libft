 #include "libft.h"
char		*ft_strdup(const char *src)
{
	char	*dest;
	int		len;

	len = 0;
	while (src[len])
		len++;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	dest[len + 1] = '\0';
	while (len > 0)
	{
		dest[len] = src[len];
		len--;
	}
	dest[0] = src[0];
	return (&dest[len]);
}


// int main()
// {
//     char source[] = "Ziyad";
//     char* target = ft_strdup(source);
 
//     printf("%s", target);
//     return 0;
// }