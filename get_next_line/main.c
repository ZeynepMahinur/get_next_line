#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int     main()
{
    int fd = open("text.txt", O_RDONLY);
    char *line = get_next_line(fd);
    while (line)
    {
        printf("%s", line);
        free(line);
    }
    close (fd);
}