/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 18:13:22 by camurray          #+#    #+#             */
/*   Updated: 2019/07/24 18:14:04 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include <stdlib.h>
# include <get_next_line.h>

# define INIT_STACKS_1 {a = init_stack(ac, av); b = NULL;}
# define INIT_STACKS_2 {a = init_stack(length_of(s_argv), s_argv); b = NULL;}

# ifndef PUSH_SWAP_H
#  define ERROR {ft_putendl_col_fd(RED, "ERROR", 1); exit(0);}
# endif
# define BAD_USE {ft_putendl_col_fd(RED, "Too few arguments.", 1); return (0);}
# define CHECK_ARGS {(!ac) ? (BAD_USE) : NULL}
# define KO {ft_putendl_col_fd(RED, "KO", 1); exit(0);}
# define OK {ft_putendl_col_fd(GREEN, "OK", 1); exit(0);}
# define OK_FREE {ft_putendl_col_fd(GREEN, "OK", 1); (FREE); exit(0);}
# define KO_FREE {ft_putendl_col_fd(RED, "KO", 1); (FREE); exit(0);}

# define CLEAR ft_putstr("\033[H\033[J");
# define DIVIDER ft_putchar_col_fd(GREEN, 0x2503, 1); ft_putchar(' ');
# define VISUALIZE {ft_putstr("\033[H\033[J"); visualize(a, b);}

# define MOVES {ft_putstr("Moves taken: "); ft_putnbr(count); ft_putendl("");}
# define SHIFT_ARGV {av++; ac--;}
# define V_ENABLED args & 1
# define C_ENABLED (args & (1 << 1))
# define O_ENABLED (args & (1 << 2))
# define FREE {free_stack(a); a = NULL;}

typedef struct		s_stack
{
	int				number;
	struct s_stack	*next;
	struct s_stack	*previous;
}					t_stack;

/*
** Stacks.
*/
t_stack				*init_stack();
t_stack				*stack_new(int n);
void				stack_add(t_stack **head, t_stack *node);
int					stack_size(t_stack *a);
void				push(t_stack **head_ref, int new_data);
void				free_stack(t_stack *stack);
int					sorted(t_stack *a);

/*
** Operations.
*/
void				swap(t_stack **stack);
void				push_to(t_stack **to, t_stack **from);
void				pa(t_stack **a, t_stack **b);
void				pb(t_stack **a, t_stack **b);
void				ss(t_stack **a, t_stack **b);
void				rrr(t_stack **a, t_stack **b);
void				rr(t_stack **a, t_stack **b);
void				rotate(t_stack **stack, int n);
/*
** Input checking
*/
void				handle_arguments(int *ac, char ***av, char *args);
int					checkline(char *line);
int					is_arg(char **str, char *args);
int					input_valid(int ac, char **av);
int					check_op(char *line);
void				do_op(char *line, t_stack **a, t_stack **b, char args);
void				read_input(t_stack **a, t_stack **b, char args);
int					string_input(char *str);
int					int_input_check(int ac, char **av);
int					only_digits(char *str);
int					int_check(char *str);
int					has_doubles(int ac, char **av);
int					string_input_valid(char **str);

char				**atoi_split(char **av);
int					length_of(char **av);
/*
** Visualizer!
*/
void				visualize(t_stack *a, t_stack *b);

#endif
