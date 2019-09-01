#include "libft.h"

int ft_isxdigit(int c)
{
    if (ft_isdigit(c) || (c >= 65 && c <= 70) || (c >= 97 && c <= 102))
        return (1);
    else
        return (0);
}
