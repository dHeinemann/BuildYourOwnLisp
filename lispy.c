#include <stdio.h>
#include <string.h>

static char input[2048];

int main(int argc, char** argv)
{
    puts("Lispy version 0.0.0.01");
    puts("Enter 'exit' to quit.\n");

    while (1)
    {
        fputs("lispy> ", stdout);
        fgets(input, 2048, stdin);
        if (strncmp(input, "exit", 4) == 0)
        {
            break;
        }
        printf("No, you're a %s", input);
    }

    return 0;
}
