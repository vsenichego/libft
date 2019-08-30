#include "libft.h"

char    *ft_strndup(const char *s, size_t n)
{
    char    *dst;

    if (!s)
        return (NULL);
    if (!(dst = (char *)malloc(sizeof(char) * ft_strnlen(s, n) + 1)))
        return (NULL);
    dst = ft_strncpy(dst, s, n);
    dst[n] = '\0';
    return (dst);
}

