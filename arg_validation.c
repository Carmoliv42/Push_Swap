#include "push_swap.h"

int arg_validation(int ac, char **av)
{
    int  i;
    if (ac <= 1)
    {
        printf("ERROR: Não foi passado argumento\n");
        return (0);
    }
    i = 1;
    while (av[i])
    {
        if (ps_duplicate(ac, av))
        {
            printf("Error: Number duplicate.\n");
            return (0);
        }
        i++;
    }
    i = 1;
    while (av[i])
    {
        if (!ps_isinteger(av[i]))
        {
            printf("ERROR: Not number integer\n");
            return (0);
        }
        i++;
    }
    i = 1;
    while (av[i])
    {
        if (!check_min_max(av[i]))
        {
            printf("Error: Out of ranger.\n");
            return(0);
        }
        i++;
    }
    return (1);
}