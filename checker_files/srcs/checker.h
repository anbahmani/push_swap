/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahmani <abahmani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 16:12:47 by abahmani          #+#    #+#             */
/*   Updated: 2021/10/23 17:38:06 by abahmani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "libft/libft.h"
# include "get_next_line/get_next_line_bonus.h"

int				main(int ac, char **av);
void			swap(t_list	**head);
void			swap_ss(t_list **head1, t_list **head2);
void			push(t_list **head1, t_list **head2);
void			rotate(t_list **head);
void			rotate_rr(t_list **head1, t_list **head2);
void			reverse_rotate(t_list **head);
void			reverse_rotate_rrr(t_list **head1, t_list **head2);
unsigned int	check_nb(char *s);
unsigned int	check_input(char **av);
unsigned int	count_nb(char **av);
unsigned int	check_doublons(char	**av);
unsigned int	check_tab(unsigned int in_tab, int *tab, int nb);
unsigned int	is_sorted(t_list *head);
void			clean_lst(t_list **h);
void			free_av(char **av, int ac);
int				nb_tab(char **av);
unsigned int	check_overflow(char *s);
t_list			**create_lst(char **av, int ac);
char			**split_av(char **av, int *ac);
int				process_rotate_or_reverse(char **line, t_list **a, t_list **b);
int				process_swap(char **line, t_list **a, t_list **b);
int				process_push(char **line, t_list **a, t_list **b);
int				process_push_swap_output(char **line, t_list **a, t_list **b);
int				get_actions(t_list **a, t_list **b);

#endif