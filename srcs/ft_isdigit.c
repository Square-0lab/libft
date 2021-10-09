#include "libft.h"
int ft_isdigit(int x)
{
    return(x >= '0' && x <= '9');
}

// int main()
// {
//     char c;
//     c='5';
//     printf("Result when numeric character is passed: %d", ft_isdigit(c));

//     c='+';
//     printf("\nResult when non-numeric character is passed: %d", ft_isdigit(c));

//     return 0;
// }