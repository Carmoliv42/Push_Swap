#include "push_swap.h"

int    push_swap(int ac, char **av)
{
    int  i;
    int value;
    t_stack *stack_a;
    t_stack *new_nod;
    t_stack *temp;

    if(!arg_validation(ac, av))
        return (0);
    i = 1;
    stack_a = NULL;
    while (av[i])
    {
        value = ft_atoi(av[i]);
        new_nod = ps_lstnew(value);
        ps_lst_append(&stack_a, new_nod);
        i++;
    }
    temp = stack_a;
    printf("Values in list: ");
    while(temp)
    {
        printf(" %d", temp->content);
        temp = temp->next;
    }
    printf("\n");
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
    push_swap(ac, av);
    return (0);
}