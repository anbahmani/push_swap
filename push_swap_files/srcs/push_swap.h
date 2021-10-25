/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 18:47:24 by abahmani          #+#    #+#             */
/*   Updated: 2021/10/23 17:36:11 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "Libft/libft.h"

typedef struct s_move
{
	void			(*move[4])(t_list **a, t_list **b, int place);
	int				(*t[4])(t_list *a, t_list *b, int place);
	int				best_move;
	unsigned int	splited;
}				t_move;

typedef struct s_get_move
{
	int	place;
	int	nb_actions;
}				t_get_move;

void			swap(t_list	**head);
void			swap_ss(t_list **head1, t_list **head2);
void			push(t_list **head1, t_list **head2);
void			rotate(t_list **head);
void			rotate_rr(t_list **head1, t_list **head2);
void			reverse_rotate(t_list **head);
void			reverse_rotate_rrr(t_list **head1, t_list **head2);
unsigned int	check_input(char **av);
int				main(int ac, char **av);
unsigned int	check_doublons(char	**av);
unsigned int	check_tab(unsigned int in_tab, int *tab, int nb);
unsigned int	is_median(t_list *stack, int nb);
t_list			*find_mediane(t_list *stack);
t_list			*get_content(unsigned int pos, t_list *head);
void			add_place(t_list **first);
unsigned int	count_nb(char **av);
unsigned int	is_sorted(t_list *head);
t_list			**create_lst(char **av, int ac);
void			init_fct_tab(t_move *m);
void			place_double_r(t_list **a, t_list **b, int place);
void			place_double_rr(t_list **a, t_list **b, int place);
void			place_r_on_a_rr_on_b(t_list **a, t_list **b, int place);
void			place_rr_on_a_r_on_b(t_list **a, t_list **b, int place);
void			place_with_r(t_list	**a, int nb);
void			place_with_rr(t_list **a, int nb);
void			place_ra(t_list **a, int nb_ra);
void			place_rb(t_list **b, int nb_rb);
void			place_rr(t_list **a, t_list **b, int nb_rr);
void			place_rra(t_list **a, int nb_rra);
void			place_rrb(t_list **b, int nb_rrb);
void			place_rrr(t_list **a, t_list **b, int nb_rrr);
int				test_best_move(t_list *a, t_list *b, int place, t_move *m);
int				get_best_move(t_list *a, t_list *b, t_move *m, t_get_move gm);
void			sort_five_nb(t_list **a, t_list **b);
void			push_two_nb(t_list **a, t_list **b, int to_place);
void			sort_again(t_list **a);
void			push_nb_to_b(t_list **a, t_list **b, int size);
void			add_b_to_a(t_list **a, t_list **b, t_move *m);
void			add_nb_to_a(t_list **a, t_list **b, int place, t_move *m);
void			sort_hundred_nb(t_list **a, t_list **b, t_move *m);
void			swap_var(int *n1, int *n2);
int				*sort_array(int first, int second, int third);
void			one_swap(t_list **head, char *stack_name);
void			swap_and_reverse_rotate(t_list **head, char *stack_name);
void			one_rotate(t_list **head, char *stack_name);
void			swap_and_rotate(t_list **head, char *stack_name);
void			one_reverse_rotate(t_list **head, char *stack_name);
void			sort_three_nb(t_list **head, char *stack_name);
void			sort_two_nb(t_list **head, char *stack_name);
void			sort(t_list **a, t_list **b, t_move *m);
int				last_place(t_list *head);
int				*copy_lst_in_tab(t_list *head);
int				max_in_lst(t_list *head);
int				min_in_lst(t_list *head);
int				less_actions_nb(t_list *a, t_list *b, t_move *m);
int				test_double_r(t_list *a, t_list *b, int place);
int				test_double_rr(t_list *a, t_list *b, int place);
int				test_r_on_a_rr_on_b(t_list *a, t_list *b, int place);
int				test_rr_on_a_r_on_b(t_list *a, t_list *b, int place);
int				test_r_on_a_max_min(int *t, int min);
int				test_rr_on_a_max_min(int *t, int max, int size);
int				test_r_on_a(t_list *a, int nb);
int				test_rr_on_a(t_list *a, int nb);
int				test_r_on_b(t_list *b, int place);
int				test_rr_on_b(t_list *b, int place);
t_list			*next_without_place(t_list *first);
int				actions_tool(int *big, int *small);
void			sort_five_hundred_nb(t_list **a, t_list **b, t_move *m);
void			second_push_to_b(t_list **a, t_list **b, int size);
void			first_push_to_b(t_list **a, t_list **b, int size);
void			nb_go_last(int place, int size, t_list **b);
void			nb_go_last_bis(int place, int size, t_list **b);
void			clean_lst(t_list **h);
unsigned int	check_overflow(char *s);
void			free_av(char **av, int ac);
char			**split_av(char **av, int *ac);
int				nb_tab(char **av);
int				quit_failure(int ac, char **av, t_list **a, t_move m);
int				quit_success(int ac, char **av, t_list **a, t_move m);

#endif