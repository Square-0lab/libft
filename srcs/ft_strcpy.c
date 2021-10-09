#include "libft.h"
char *ft_strcpy(char *dest, const char *src)
{
    size_t  i;
    
    i = 0;
    while(src[i])
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

//    ft_strcpy(dest, src);

//    printf("Copied string : %s\n", dest);
   
//    return(0);
// }