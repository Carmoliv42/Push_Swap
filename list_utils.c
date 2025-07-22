#include "push_swap.h"

t_stack *ps_lstnew(int content)
{
     t_stack *stack;

    stack = (t_stack *)malloc(sizeof(*stack));
    if (!stack)
        return (NULL);
    stack->content = content;
    stack->next = NULL;
    stack->prev = NULL;
    stack->target = NULL;
    return (stack);
}

t_stack *ps_lstlast(t_stack *lst)
{
    if (!lst)
        return (NULL);
    while (lst->next != NULL)
        lst = lst->next;
    return (lst);
}

void    ps_lst_append(t_stack **lst, t_stack *new)
{
    t_stack *last;
    if (!lst || !new)
        return ;
    if (*lst == NULL)
    {
        *lst = new;
        return ;
    }
    else
    {
        last = ps_lstlast(*lst);
        last->next = new;
        new->prev = last;
    }
}