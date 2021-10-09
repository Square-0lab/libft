#include "libft.h"
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;

    i = 0;
    while(haystack[i] && i < len)
    {
        j = 0;
        while (haystack[i + j] == needle[j])
        {
            j++;
            if (needle[j] == '\0')
            {
                return ((char*)&haystack[i]);
            }
        }
        i++;
    }
    return (NULL);
}

// int main () {
//    const char haystack[20] = "Ziyadforhwin";
//    const char needle[10] = "for";
//    char *ret;

//    ret = ft_strnstr(haystack, needle, 6);

//    printf("The substring is: %s\n", ret);
   
//    return(0);
// }