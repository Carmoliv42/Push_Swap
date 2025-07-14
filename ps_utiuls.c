#include "push_swap.h"

char    ps_isdigit(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

int ps_isinteger( const char *av)
{
    int  i;

    i = 0;
    if (av[0] == '-' || av[0] == '+')
        i++;
    if (!av[i])
        return (0);
    while (av[i])
    {
        if (!ps_isdigit(av[i]))
            return (0);
        i++;
    }
    return (1);
}

int check_min_max (const char *av)
{
    const char *max_pos;
    const char *max_neg;
    int is_negative;
    int len;

    max_pos = "2147483647";
    max_neg = "2147483648";
    is_negative = 0;
    if (*av == '-' || *av == '+')
    {
        if (*av == '-')
            is_negative = 1;
        av++;
    }
    while (*av == '0')
        av++;
    len = ft_strlen(av);
    if (len < 10)
        return (1);
    if (len > 10)
        return (0);
    if (is_negative)
        return (ft_strncmp(av, max_neg, 10) <= 0);
    else
        return (ft_strncmp(av, max_pos, 10) <= 0);
}

int ps_duplicate (int ac, char **av)
{
    int i;
    int j;

    i = 1;
    while (i < ac)
    {
        j = i + 1;
        while (j < ac)
        {
            if (ft_atoi(av[i]) == ft_atoi(av[j]))
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}