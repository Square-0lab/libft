#include "libft.h"
int ft_isascii(int x)
{
    if(x >= 0 && x <= 127)
    {
        return (1);
    }
    return (0);
}

// int   main()
// {
//     char c = '';

//     printf("Result %d", ft_isascii(c));
//      printf("Result %d", isascii(c));
// }