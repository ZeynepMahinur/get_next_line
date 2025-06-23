#include "get_next_line.h"

static char     *re_sa(int fd, char *saved)
{
    char    *buffer;
    char    *temp;
    ssize_t i;

    buffer = malloc(BUFFER_SIZE + 1);
    if (!buffer)
        return (NULL);
    i = 1;
    while (saved == NULL || !ft_strchr(saved, '\n') && i != 0)
    {
        i = read(fd, buffer, BUFFER_SIZE);
        if (i == -1)
        {
            free (buffer);
            return (NULL);
        }
        buffer[i] = '\0';
        temp = saved;
        saved = ft_strjoin(saved, buffer);
        free (temp);
    }
    free (buffer);
    return (saved);
}

static char     *get_line(char *saved)
{
    char    *line;
    int     i;
    int     j;

    i = 0;
    j = 0;
    if (!saved && saved[0] == 0)
    return (NULL);
    while (saved[i] && saved[i] != '\n')
    i++;
    if (saved[i] && saved[i] == '\n')
    i++;
    line = malloc(i + 1);
    if (!line)
        return (NULL);
    while (j < i)
    {
        line[j] = saved[j];
        j++;
    }
    line[j] = '\0';
    return (line);
}

static char     *save_remain(char *saved)
{
    char    *new_save;
    int     i;
    int     j;

    i = 0;
    j = 0;
    if (!saved[i])
    {
        free (saved);
        return (NULL);
    }
    while (saved[i] && saved[i] == '\n')
        i++;
    new_save = malloc(ft_strlen(saved + i + 1) + 1);
    if (!new_save)
        return (NULL);
    i++;
    while (saved[i])
        new_save[j++] = saved[i++];
    new_save[j] = '\0';
    free (saved);
    return (new_save);
}

char    *get_next_line(int fd)
{
    static char     *saved;
    char            *line;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    saved = re_sa(fd, saved);
    if (!saved)
        return (NULL);
    line = get_line(saved);
    saved = save_remain(saved);
    return (line);
}