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
# define MAX_STACK 500

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
void	ft_sort_min_five(t_stack **tab_stack_a, int lenght,
			int arr[], int arr_sorted[]);
void	last_adjust(t_stack **tab_stack_a, t_stack **tab_stack_b, int size_b);
void	s_a_b(t_stack **tab_stack, char *name);
void	r_a_b(t_stack **tab_stack, char *name);
void	p_a_b(t_stack **dest_stack, t_stack **src_stack, char *name);
void	rr_a_b(t_stack **tab_stack, char *name);
void	ss(t_stack **tab_stack_a, t_stack **tab_stack_b);
void	rr(t_stack **tab_stack_a, t_stack **tab_stack_b);
void	rrr(t_stack **tab_stack_a, t_stack **tab_stack_b);
int		is_sorted(t_stack *tab_stack, int lenght);
void	stack_sorted_arr(t_stack *tab_stack_a, int lenght, int arr[]);
void	stack_to_array(t_stack *tab_stack_a, int lenght, int arr[]);
void	ft_sort(t_stack **tab_stack_a, int lenght);
void	ft_sort_big(t_stack **tab_stack_a, int lenght, int arr_sorted[]);
int		find_next_match(int *arr, int lenght, int max);
void	ft_adjust(t_stack **tab_stack_a, int indice, int lenght);
int		find_next_match_s_a(int *arr, int lenght, int max);
void	ft_adjust_s_a(t_stack **tab_stack_a, int indice, int lenght);
void	ft_push_back(t_stack **tab_stack_a, t_stack **tab_stack_b, int size_b);
void	ft_push_forward(t_stack **tst_a, t_stack **tst_b,
			int *mid, int *size_b);
int		find_pivot(int lenght, int mid);
int		check_redondance(t_stack **tab_stack_a, int lenght);
void	free_stack(t_stack **tab_stack);
int		is_args_int(int lenght, char *argv[]);

#endif