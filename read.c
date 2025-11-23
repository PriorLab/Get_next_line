#include <fcntl.h>   // open
#include <unistd.h>  // read, close
#include <stdio.h>   // printf, perror

int main(void)
{
    int     fd;
    char    buffer[1000];      // 10 chars + '\0'
    ssize_t bytes;

    fd = open("text.txt", O_RDONLY);
    if (fd < 0)
    {
        perror("open");
        return (1);
    }

    bytes = read(fd, buffer, 2);   // tenta ler 10 bytes
    if (bytes < 0)
    {
        perror("read");
        close(fd);
        return (1);
    }

    buffer[bytes] = '\0';          // terminar a string
    printf("Li %zd bytes: \"%s\"\n", bytes, buffer);

    close(fd);
    return (0);
}