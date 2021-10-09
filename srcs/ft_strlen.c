#include "libft.h"
size_t  ft_strlen(const char *str)
{
    size_t  i;

    i = 0;
      while(str[i] != '\0')
    {   
         i++;
    }
    return (i);
}

// int main () {
//    char str[50];
//    int len;

//    strcpy(str, "This is tutorialspoint.com");

//    len = ft_strlen(str);
//    printf("Length of |%s| is |%d|\n", str, len);
   
//    return(0);
// }