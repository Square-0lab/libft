#include "libft.h"
void    *ft_memset(void *s, int c, size_t n)
{
    char    *x;

    x = s;
        while(n)
            {
                *x = c;
                x++;
                n--;
            }
    return (s);
}

// int main (void)
// {
//     char    memo[8];
//     ft_memset(memo, 'r',7);
//     printf("%s", memo);
// }