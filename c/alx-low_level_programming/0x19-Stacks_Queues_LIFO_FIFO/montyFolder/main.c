#include "monty.h"

int main(int ac, char *av[])
{
    char *cmd = NULL;
    size_t len = 0;
    FILE *fp;
    char *token;
    char *args[1024];
    int i = 0;

    fp = fopen(av[1], "r");

    while (getline(&cmd, &len, fp) != EOF)
    {
        token = strtok(cmd, " \n");
        while (token)
        {
            args[i++] = token;
            token = strtok(NULL, " \n");
        }
        args[i] = NULL;
        if (strcmp(args[0], "push") == 0)
        {
            push(atoi(args[1]));
        }
        if (strcmp(args[0], "pall") == 0)
        {
            display();
        }
        if (strcmp(args[0], "pop") == 0)
        {
            pop();
        }
        if (strcmp(args[0], "swap") == 0)
        {
            swap();
        }
        if (strcmp(args[0], "add") == 0)
        {
            add();
        }
    }
    fclose(fp);
    free(cmd);
    return (0);
    
}