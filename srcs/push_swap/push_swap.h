/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurray <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 18:17:06 by camurray          #+#    #+#             */
/*   Updated: 2019/07/24 18:17:27 by camurray         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <libft.h>
# define ERROR {ft_putendl_col_fd(RED, "ERROR", 1); exit(0);}
# define VAR(NAME) #NAME
# define MESSAGE(string, colour) (col_endl_fd(colour, string, 1),FS(),exit(1))
# define ARRLEN(args, ac) ac = 0;while(args[ac])ac++;ac++;
# define EXEC(str) {rule(&ps->a, &ps->b, str);ft_putendl(str);continue;}
# define DEXEC(str) {rule(&ps->a, &ps->b, str);ft_putendl(str);return(1);}
# define BS (&ps->b)
# define AS (&ps->a)
# define A (ps->a.lst)
# define B (ps->b.lst)
# define AN (ps->a.lst->next)
# define BN (ps->b.lst->next)
# define AA (A && AN)
# define BB (B && BN)
# define AB (AA && BB)
# define ABV (bottom_val(AS))
# define BBV (bottom_val(BS))
# define HV(stack) (highest_val(stack))
# define LV(stack) (lowest_val(stack))
# define RANGE() (sect * ((stack_size(AS) + stack_size(BS)) / parts))
# define BHP(value) (find_pos(BS, value))
# define NH(stack) (highest_under(stack, HV(stack)))

typedef struct	s_stack
{
	int				value;
	int				size;
	struct s_stack	*next;
}				t_stack;

typedef struct	s_stackdata
{
	t_stack		*lst;
	int			size;
}				t_stackdata;

typedef struct	s_ps
{
	t_stackdata	a;
	t_stackdata	b;
}				t_ps;

t_stack			*new_node(int value);
void			push(t_stackdata *list, int val);
int				peek(t_stack *top);
void			printstack(t_stack *stack);
void			rule(t_stackdata *a, t_stackdata *b, char *line);
void			printbothstacks(t_stackdata *a, t_stackdata *b);
int				check_sorted(t_stackdata *a);
int				check_largest(t_stackdata *stack);
int				check_inverted(t_stackdata *a);
void			windows_tests(t_stackdata *a, t_stackdata *b);
void			swap(t_stackdata *stack);
void			push_to(t_stackdata *to, t_stackdata *from);
void			rotate(t_stackdata *stack);
void			rrx(t_stackdata *stack);
void			ss(t_stackdata *a, t_stackdata *b);
void			rr(t_stackdata *a, t_stackdata *b);
void			rrr(t_stackdata *a, t_stackdata *b);
void			check_dups(char **av);
void			temp_stack(t_stackdata *temp, int size);
t_stackdata		normalize(t_stackdata *temp, int size, t_stackdata *a);
void			freestack(t_stackdata *stack);
void			init(t_ps *ps, char **av, int ac);
int				bottom_val(t_stackdata *stack);
int				stack_size(t_stackdata *stack);
int				lowest_val(t_stackdata *stack);
int				highest_val(t_stackdata *stack);
int				highest_under(t_stackdata *stack, int val);
int				find_pos(t_stackdata *stack, int value);
void			freestack(t_stackdata *stack);
t_stackdata		normalize(t_stackdata *temp, int size, t_stackdata *a);
int				moves(t_stackdata *stack, int value);
void			temp_stack(t_stackdata *temp, int size);
void			dtt(t_ps *ps);
void			rotateb(t_ps *ps, int pos, int halfstack);
void			secondhighest(t_ps *ps);
void			partition(t_ps *ps);
int				checkdoublerule(t_ps *ps);
void			rotate_a_end(t_ps *ps);
void			pushreturn_to_a(t_ps *ps);
void			return_to_a(t_ps *ps);
void			rotate_b(t_ps *ps, int i);
int				int_input_check(int ac, char **av);
int				string_input(char *str);
int				input_valid(int ac, char **av);

#endif
