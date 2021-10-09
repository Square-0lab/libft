#include "libft.h"
int ft_tolower(int x)
{
    if(x >= 65 && x <= 90)
        x = x + 32;
    return (x);
}

// int main()
// {
//     char c, result;

//     c = 'M';
//     result = ft_tolower(c);
//     printf("tolower(%c) = %c\n", c, result);

//     c = 'm';
//     result = ft_tolower(c);
//     printf("tolower(%c) = %c\n", c, result);

//     c = '+';
//     result = ft_tolower(c);
//     printf("tolower(%c) = %c\n", c, result);

//     return 0;
// }