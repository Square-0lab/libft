#include "libft.h"
int ft_isalnum(int  x)
{
    if(((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')) || (x >= '0' && x <= '9'))
    {
        return (1);
    }
    return (0);
}

// int main()
// {
//     char c;
//     int result;

//     c = '5';
//     result = ft_isalnum(c);
//     printf("When %c is passed, return value is %d\n", c, result);

//     c = 'Q';
//     result = ft_isalnum(c);
//     printf("When %c is passed, return value is %d\n", c, result);

//     c = 'l';
//     result = ft_isalnum(c);
//     printf("When %c is passed, return value is %d\n", c, result);

//     c = '+';
//     result = ft_isalnum(c);
//     printf("When %c is passed, return value is %d\n", c, result);

//     return 0;
// }
    