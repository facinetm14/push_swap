/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_big.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 10:38:06 by fakouyat          #+#    #+#             */
/*   Updated: 2022/06/30 10:38:06 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_headers.h"

void	ft_sort_middle(t_stack **tab_stack_a, int lenght)
{
    t_stack	**tab_stack_b;
	int		size_b;
	int		min;

	tab_stack_b = malloc(sizeof(t_stack *) * (lenght));
	min = find_smallest(*tab_stack_a);
	size_b = lenght;
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
		if (size_b == 5)
			break ;
	}
	ft_sort_min_plus(tab_stack_a, size_b);
	while (*tab_stack_b)
		p_a_b(tab_stack_a, tab_stack_b, "pa\n");
	free(tab_stack_b);	
} 

void	ft_sort_middle_plus(t_stack **tab_stack_a, int lenght)
{
    t_stack	**tab_stack_b;
	int		size_b;
	int		min;

	tab_stack_b = malloc(sizeof(t_stack *) * (lenght));
	min = find_smallest(*tab_stack_a);
	size_b = lenght;
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
		if (size_b == 10)
			break ;
	}
	ft_sort_middle(tab_stack_a, size_b);
	while (*tab_stack_b)
		p_a_b(tab_stack_a, tab_stack_b, "pa\n");
	free(tab_stack_b);	
} 