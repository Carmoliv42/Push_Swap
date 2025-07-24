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
//inserir no topo da stack
void    ps_lst_top(t_stack **stack, t_stack *new_node)
{
    if (!stack || !new_node)
        return;
    new_node->next = *stack;
    if (*stack)
        (*stack)->prev = new_node;
    new_node->prev = NULL;
    *stack = new_node;
}
//remover do top da stack
t_stack *ps_lst_pop(t_stack **stack)
{
    t_stack *top;

    if (!stack || !*stack)
        return (NULL);
    top = *stack;
    *stack = top->next;
    if (*stack)
        (*stack)->prev = NULL;
    top->next = NULL;
    top->prev = NULL;
    return (top);
}

//mostrar a stack
void    ps_print_stack(t_stack *stack, char name)
{
    printf("Stack %c: ",name);
    while (stack)
    {
        printf("%d ", stack->content);
        stack = stack->next;
    }
    printf("\n");
}