#include "libft.h"
void    ft_bzero(void *s, size_t n)
{
    char    *x;

    x = s;
        while(n)
            {
                *x = 0;
                x++;
                n--;
            }
}

// int main (void)
// {
//     char    memo[8];
//     ft_bzero(memo,7);
//     printf("%s", memo);
// }