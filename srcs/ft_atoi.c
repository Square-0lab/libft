#include "libft.h"
int ft_atoi(const char *str)
{
    size_t  i;
    size_t  neg;
    size_t  ret;

    ret = 0;
    i = 0;
    neg = 1;
    while (((str[i] >= 9 && str[i] <= 13) || str[i] == 32) && str[i])
	        i++;
    if(str[i] == '-')
    {
        neg = -1;
        i++;        
    }
    else if (str[i] == '+')
        i++;
    while ((str[i] >= 48 && str[i] <= 57) && str[i])
	{
		ret = ret * 10 + (str[i] - '0');
		i++;
	}
    return (ret * neg);
}

// int main () {
//    int val;
//    char str[20];
   
//    strcpy(str, "0.0001");
//    val = ft_atoi(str);
//    printf("String value = %s, Int value = %d\n", str, val);

//    strcpy(str, "0.0001");
//    val = atoi(str);
//    printf("String value = %s, Int value = %d\n", str, val);

//    return(0);
// }