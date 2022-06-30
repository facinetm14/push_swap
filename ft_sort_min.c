/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 16:16:02 by fakouyat          #+#    #+#             */
/*   Updated: 2022/06/27 16:16:02 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_headers.h"

void	ft_sort_min_two(t_stack **tab_stack_a)
{
	int	first;
	int	sec;

	first = (*tab_stack_a)->data;
	sec = (*tab_stack_a)->next->data;
	if (first > sec)
		s_a_b(tab_stack_a, "sb\n");
	else if (first == sec)
		write(1, "Error\n", 6);
	else
		return ;
}

void	ft_sort_min_three(t_stack **tst_a)
{
	int	sec;
	int	third;

	sec = (*tst_a)->next->data;
	third = (*tst_a)->next->next->data;
	if ((*tst_a)->data < sec && sec < third)
		return ;
	if ((*tst_a)->data > sec && sec < third && (*tst_a)->data < third)
		s_a_b(tst_a, "sa\n");
	else if ((*tst_a)->data > sec && sec > third)
	{
		r_a_b(tst_a, "ra\n");
		s_a_b(tst_a, "sa\n");
	}
	else if ((*tst_a)->data > sec && sec < third && (*tst_a)->data > third)
		r_a_b(tst_a, "ra\n");
	else if ((*tst_a)->data < sec && sec > third && (*tst_a)->data > third)
		rr_a_b(tst_a, "rra\n");
	else if ((*tst_a)->data < sec && sec > third && (*tst_a)->data < third)
	{
		s_a_b(tst_a, "sa\n");
		r_a_b(tst_a, "ra\n");
	}
}

void	ft_sort_min_plus(t_stack **tab_stack_a, int lenght)
{
	t_stack	**tab_stack_b;
	int		size_b;
	int		min;

	tab_stack_b = malloc(sizeof(t_stack *) * (lenght));
	min = find_smallest(*tab_stack_a);
	size_b = lenght - 1;
	while (*tab_stack_a)
	{
		if ((*tab_stack_a)->data == min)
		{
			p_a_b(tab_stack_b, tab_stack_a, "pb\n");
			min = find_smallest(*tab_stack_a);
			size_b--;
		}
		else
			r_a_b(tab_stack_a, "ra\n");
		if (size_b == 3)
			break ;
	}
	ft_sort_min_three(tab_stack_a);
	while (*tab_stack_b)
		p_a_b(tab_stack_a, tab_stack_b, "pa\n");
	free(tab_stack_b);
}
