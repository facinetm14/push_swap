/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 19:18:01 by fakouyat          #+#    #+#             */
/*   Updated: 2022/06/24 19:18:01 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_HEADERS_H
# define FT_HEADERS_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_list
{
	struct s_list	*next;
	int				data;
}	t_stack;
t_stack	**ft_initialise(char *arr[], int lenght);
void	ft_swap_top(t_stack **stack);
void	ft_swap_both_top(t_stack **stack_a, t_stack **stack_b);
void	ft_push_top(t_stack **dest_stack, t_stack **src_stack);
void	ft_rotate(t_stack **stack);
void	ft_rotate_reverse(t_stack **stack);
void	ft_rotate_both(t_stack **tab_stack_a, t_stack **tab_stack_b);
void	ft_rotate_reverse_both(t_stack **tab_stack_a, t_stack **tab_stack_b);
void	ft_sort_min_three(t_stack **tst_a);
void	ft_sort_min_two(t_stack **tab_stack_a);
void	ft_sort_min_plus(t_stack **tab_stack_a, int lenght);
void	s_a_b(t_stack **tab_stack, char *name);
void	r_a_b(t_stack **tab_stack, char *name);
void	p_a_b(t_stack **dest_stack, t_stack **src_stack, char *name);
void	rr_a_b(t_stack **tab_stack, char *name);
void	ss(t_stack **tab_stack_a, t_stack **tab_stack_b);
void	rr(t_stack **tab_stack_a, t_stack **tab_stack_b);
void	rrr(t_stack **tab_stack_a, t_stack **tab_stack_b);
int 	find_smallest(t_stack *tab_stack);
int 	is_sorted(t_stack *tab_stack, int lenght);
void	ft_sort_middle(t_stack **tab_stack_a, int lenght);
void	ft_sort_middle_plus(t_stack **tab_stack_a, int lenght);
#endif