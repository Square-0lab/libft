#include "libft.h"
int ft_strcmp(const char *str1, const char *str2)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    while(str1[i] || str2[j]) 
    {  
        if(str1[i] != str2[j])
        {
            return (str1[i] - str2[j]);
        }
    }
    return (0);
}

// int main () {
//    char str1[15];
//    char str2[15];
//    int ret;


//    strcpy(str1, "abcdef");
//    strcpy(str2, "ABCDEF");

//    ret = ft_strcmp(str1, str2);

//    if(ret < 0) {
//       printf("str1 is less than str2");
//    } else if(ret > 0) {
//       printf("str2 is less than str1");
//    } else {
//       printf("str1 is equal to str2");
//    }
   
//    return(0);
// }