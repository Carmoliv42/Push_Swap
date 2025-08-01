#include "push_swap.h"

int    push_swap(int ac, char **av)
{
    int  i;
    int value;
    t_stack *stack_a;
    t_stack *new_nod;
    t_stack *node;

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
    ps_print_stack(stack_a, 'A');
    node = ps_lst_pop(&stack_a);
    printf("Values after: \n");
    ps_validation(stack_a);
    
    
   
    return (0);
}

int main(int ac, char **av)
{
    return (push_swap(ac, av));
}