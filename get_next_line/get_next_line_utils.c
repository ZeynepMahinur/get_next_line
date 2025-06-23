#include "get_next_line.h"

size_t      ft_strlen(const char *str)
{
    size_t  len;

    len = 0;
    while (*str++)
    {
        len++;
    }
    return (len);
}

char    *ft_strchr(const char *s, int c)
{
    if (!s)
        return (NULL);
    while (*s)
    {
        if (*s == (char)c)
            return ((char *)s);
        s++;
    }
    if ((char)c == '\0')
        return ((char *)s);
    return (0);
}

static size_t   adjust_len(const char *s1, const char *s2)
{
    size_t  len1;
    size_t  len2;

    if (s1)
    {
        len1 = ft_strlen(s1);
    }
    if (s2)
    {
        len2 = ft_strlen(s2);
    }
    return (len1 + len2);
}

char *ft_strjoin(const char *s1, const char *s2)
{
    char *result;
    size_t  len;
    size_t  i;
    size_t  j;

    len = adjust_len(s1, s2);
    result = (char *)malloc(len + 1);
    if (result == NULL)
        return (NULL);
    i = 0;
    j = 0;
    while (s1[i])
    {
        result[i] = s1[i];
        i++;
    }
    while (s2[j])
    {
        result[i + j] = s2[j];
        j++;
    }
    result[len] = '\0';
    return (result);
}
