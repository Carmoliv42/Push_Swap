#include "push_swap.h"

t_stack *ps_lstnew(int content)
{
     *stack;

    stack = (t_stack *)malloc(sizeof(*stack));
    if (!stack)
        return (NULL);
    stack->content = content;
    stack->next = NULL;
    return (stack);
}

void    ps_lst_append(t_stack **lst, t_stack *new)
{
    
    if (lst == NULL || new == NULL)
        return ;
    new->next = *lst;
    *lst = new;
}