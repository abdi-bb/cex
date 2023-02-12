#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <sys/stat.h>

int create_file(const char *filename, char *text_content) {
  if (filename == NULL) {
    return -1;
  }

  FILE *fp = fopen(filename, "w");
  if (fp == NULL) {
    return -1;
  }

  if (text_content != NULL) {
    int result = fputs(text_content, fp);
    if (result < 0) {
      fclose(fp);
      return -1;
    }
  }

  fclose(fp);
  int success = chmod(filename, S_IRUSR | S_IWUSR);
  return (success == 0) ? 1 : -1;
}

int main(int ac, char **av)
{
    int res;

    if (ac != 3)
    {
        dprintf(2, "Usage: %s filename text\n", av[0]);
        exit(1);
    }
    res = create_file(av[1], av[2]);
    printf("-> %i)\n", res);
    return (0);
}