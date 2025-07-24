#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <limits.h>
# include <stdlib.h>
# include "../libft/libft.h"

typedef struct s_stack
{
    int content;
    struct  s_stack  *next;
    struct  s_stack *prev;
    struct  s_stack *target;
}   t_stack;


int arg_validation(int ac, char **av);
char    ps_isdigit(char c);
int ps_isinteger( const char *av);
int check_min_max (const char *av);
int ps_duplicate (int ac, char **av);
t_stack *ps_lstnew(int content);
void    ps_lst_append(t_stack **lst, t_stack *new);
t_stack *ps_lstlast(t_stack *lst);
void    ps_lst_top(t_stack **stack, t_stack *new_node);
t_stack *ps_lst_pop(t_stack **stack);
void    ps_print_stack(t_stack *stack, char name);


#endif