#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifdef _WIN32

static char buffer[2048];

char* readline(char* prompt)
{
    fputs(prompt, stdout);
    fgets(buffer, 2048, stdin);
    char* cpy = malloc(strlen(buffer) + 1);
    strcpy(cpy, buffer);
    cpy[strlen(cpy) - 1] = '\0';
    return cpy;
}

void add_history(char* unused) {}

#else

#include <editline/readline.h>

#endif

int main(int argc, char** argv)
{
    puts("Lispy version 0.0.0.01");
    puts("Enter 'exit' to quit.\n");

    while (1)
    {
        char* input = readline("lispy> ");
        if (strncmp(input, "exit", 4) == 0)
        {
            break;
        }
        add_history(input);
        printf("No, you're a %s\n", input);
        free(input);
    }

    return 0;
}
