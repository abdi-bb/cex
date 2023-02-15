#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	size_t len = 1024;
	char *buffer = malloc(1024);
	ssize_t read;

	while (1)
	{
		printf("$ ");
		read = getline(&buffer, &len, stdin);
		if (read == -1)
			break;

		//printf("%s", buffer);

		char *av[len];
		char *token = strtok(buffer, " ");
		int i = 0;

		while (token)
		{
			av[i++] = token;
			//printf("%s ", token);
			token = strtok(NULL, " ");
		}
		av[i] = NULL;

		execve(av[0], av, NULL);
		perror("execve");
	}
	free(buffer);
	exit(EXIT_SUCCESS);
}

