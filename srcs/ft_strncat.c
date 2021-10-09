#include "libft.h"  
char *ft_strncat(char *dest, const char *src, size_t n)
{
    size_t  i;
    size_t  l;

    i = 0;
    l = strlen(dest);
    while(src[i] && i < n)
    {
        dest[l + i] = src[i];
        i++;
    }
    dest[l + i] = '\0';
    return (dest);
}

// int main () {
//    char src[50], dest[50];

//    strcpy(src,  "The goat");
//    strcpy(dest, "Ziyad ");

//    ft_strncat(dest, src, 2);

//    printf("|%s|", dest);
   
//    return(0);
// }