#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <limits.h>
# include "../libft/libft.h" 

int arg_validation(int ac, char **av);
char    ps_isdigit(char c);
int ps_isinteger( const char *av);
int check_min_max (const char *av);
int ps_duplicate (int ac, char **av);


#endif