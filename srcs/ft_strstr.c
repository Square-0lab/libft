#include "libft.h"
char *ft_strstr(const char *haystack, const char *needle)
{
    size_t  i;
    size_t  j;

    i = 0;
    while(haystack[i])
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
//    const char haystack[20] = "Ziyad for the win";
//    const char needle[10] = "for";
//    char *ret;

//    ret = ft_strstr(haystack, needle);

//    printf("The substring is: %s\n", ret);
   
//    return(0);
// }