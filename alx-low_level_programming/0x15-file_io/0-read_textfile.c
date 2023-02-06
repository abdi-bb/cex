#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters) {
    int fd;
    ssize_t read_bytes, written_bytes;
    char *buffer;

    if (filename == NULL)
        return 0;

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return 0;

    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
        return 0;

    read_bytes = read(fd, buffer, letters);
    if (read_bytes == -1) {
        free(buffer);
        return 0;
    }

    written_bytes = write(STDOUT_FILENO, buffer, read_bytes);
    if (written_bytes == -1 || written_bytes != read_bytes) {
        free(buffer);
        return 0;
    }

    free(buffer);
    close(fd);

    return written_bytes;
}


int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}
