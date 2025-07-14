#include "push_swap.h"

char    p_swap(int ac, char **av)
{
    int  i;

    if(!arg_validation(ac, av))
        return (0);   
    i = 1;
    while (av[i])
    {
        printf("Argumento recebido: %s\n", av[i]);
        i++;
    }
    return (0);

}

int main(int ac, char **av)
{
    p_swap(ac, av);
    return (0);
}