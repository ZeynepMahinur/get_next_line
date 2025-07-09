#ifndef     GET_NEXT_LINE_BONUS_H
#define     GET_NEXT_LINE_BONUS_H

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 42
#endif

#ifndef OPEN_MAX
#define OPEN_MAX 1024
#endif

#include <stdlib.h>
#include <unistd.h>

size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin( char *s1, char *s2);
char	*get_next_line(int fd);
void	*ft_memcpy(void *dest, const void *src, size_t n);

#endif
