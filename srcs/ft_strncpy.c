
#include "libft.h"
char *ft_strncpy(char *dest, const char *src, size_t n)
{
    size_t  i;
    
    i = 0;
    while(src[i] && i < n)
    {
        dest[i] = src[i];
        i++;
    }
     dest[i] = '\0';
     return (dest);
}

// int main () {
//    char src[40] = "Ziyad";
//    char dest[100];

//    ft_strncpy(dest, src, 2);

//    printf("Copied string : %s\n", dest);
   
//    return(0);
// }