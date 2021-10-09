#include "libft.h"
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*s1;

	s1 = (char *)dst;
	i = 0;
	while (i < n)
	{
		*(char *)s1 = *(char *)src;
		s1++;
		src++;
		i++;
	}
	return (dst);
}

// int main () {
//    const char src[50] = "newstringwonthis";
//    char dest[50];
//    strcpy(dest,"oldstring");
//    ft_memcpy(dest, src, 20);
//    printf("After memmove dest = %s src = %s\n", dest, src);
   
//    return(0);
// }