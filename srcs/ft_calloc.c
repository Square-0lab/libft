#include "libft.h"
void *ft_calloc( size_t elementCount, size_t elementSize )
{
    size_t     i;
    int     *x;

    i = 0;
    x = NULL;
    x = (int*)malloc(elementCount * elementSize);

    while(i<elementCount)
    {
        x[i] = 0;
        i++;
    }
    return (x);
}