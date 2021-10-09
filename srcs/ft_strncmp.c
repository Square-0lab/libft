#include "libft.h"
int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    size_t  i;

    i = 0;
    while((str1[i] || str2[i]) && (i < n)) 
    {  
        if(str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return (0);
}

// int main () {
//    char str1[15];
//    char str2[15];
//    int ret;


//    strcpy(str1, "12345");
//    strcpy(str2, "12346");

//    ret = ft_strncmp(str1, str2,4);

//    if(ret < 0) {
//       printf("str1 is less than str2");
//    } else if(ret > 0) {
//       printf("str2 is less than str1");
//    } else {
//       printf("str1 is equal to str2");
//    }
   
//    return(0);
// }