#include "libft.h"
int ft_toupper(int x)
{
    if(x >= 65 && x <= 90)
        x = x + 32;
    else if(x >= 97 && x <= 122)
        x = x - 32;
    return (x);
}

// int main() {
//     char c;

//     c = 'm';
//     printf("%c -> %c", c, ft_toupper(c));

//     c = 'D';
//     printf("\n%c -> %c", c, ft_toupper(c));

//     c = '9';
//     printf("\n%c -> %c", c, ft_toupper(c));
//     return 0;
// }