#include "libft.h"
char	*ft_strrchr(const char *s, int c)
{
	int l;

	l = ft_strlen(s);
	while (l >= 0)
	{
		if (s[l] == (char)c)
			return ((char*)s + l);
		l--;
	}
	return (NULL);
}

// int main () {
//    const char str[] = "Z.iyad.ma.aaaa";
//    const char ch = '.';
//    char *ret;

//    ret = ft_strrchr(str, ch);

//    printf("String after |%c| is - |%s|\n", ch, ret);
   
//    return(0);
// }