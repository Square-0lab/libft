#include "libft.h"  
char *ft_strcat(char *dest, const char *src)
{
    size_t  i;
    size_t  l;

    i = 0;
    l = strlen(dest);
    while(src[i])
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

//    ft_strcat(dest, src);

//    printf("|%s|", dest);
   
//    return(0);
// }