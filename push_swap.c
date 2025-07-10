#include "push_swap.h"

char    p_swap(char *av)
{
    if (!av)
    {
        printf("Vazio\n");
        return (1);
    }
    printf("Argumento recenbido: %s\n", av);
    return (0);
}

int main(int argc, char **argv)
{
    if (argc >= 2)
        return p_swap(argv[1]);
    return (0);
}