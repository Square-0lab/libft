#include "libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;

	str = (unsigned char*)s;
	while (n--)
	{
		if (*str == (unsigned char)c)
			return (str);
		str++;
	}
	return (NULL);
}
// int main () {
//    const char str[] = {0, 1, 2 ,3 ,4 ,5};
// //    const char ch = '6';
//    char *ret;

//    ret = ft_memchr(str, 0, 1);

//    printf("String is - |%d|\n",  ret);

//    return(0);
// }