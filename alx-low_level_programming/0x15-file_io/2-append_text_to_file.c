#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <elf.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int append_text_to_file(const char *filename, char *text_content)
{
    int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
    /*
    int fd, len = 0;

    if (!filename)
        return (-1);

    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
        return (-1);

    while (text_content[len])
    {
        len++;
    }
    if (text_content == NULL)
    {
        return (-1);
    }
    else
    {
        write(fd, text_content, len);
    }
    close(fd);

    return (1);
    */
}

int main(int ac, char **av)
{
    int res;

    if (ac != 3)
    {
        dprintf(2, "Usage: %s filename text\n", av[0]);
        exit(1);
    }
    res = append_text_to_file(av[1], av[2]);
    printf("-> %i)\n", res);
    return (0);
}