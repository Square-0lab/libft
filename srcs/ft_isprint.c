#include "libft.h"
int ft_isprint(int x)
{
    if(x >= 32 && x < 127)
        return (1);
    return (0);
}

// int main()
// {
//     char c;

//     c = 'Q';
//     printf("Result when a printable character %c is passed to isprint(): %d", c, ft_isprint(c));

//     c = '\n';
//     printf("\nResult when a control character %c is passed to isprint(): %d", c, ft_isprint(c));

//     return 0;
// }