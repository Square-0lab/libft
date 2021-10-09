#include "libft.h"
int ft_isalpha(int  x)
{
    if((x >= 65 && x <= 90) || (x >= 97 && x <= 122))
    {
        return (1);
    }
    return (0);
}

// int main()
// {
//     char c;
//     c = 'Q';
//     printf("\nResult when uppercase alphabet is passed: %d", ft_isalpha(c));

//     c = 'q';
//     printf("\nResult when lowercase alphabet is passed: %d", ft_isalpha(c));

//     c='+';
//     printf("\nResult when non-alphabetic character is passed: %d", ft_isalpha(c));

//     return 0;
// }