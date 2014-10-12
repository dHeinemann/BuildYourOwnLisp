#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <editline/readline.h>

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
