/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_smallest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 06:03:05 by fakouyat          #+#    #+#             */
/*   Updated: 2022/06/30 06:03:05 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_headers.h"

int	find_pivot(int lenght, int mid)
{
	if (lenght <= 25)
		return (lenght / 2);
	else if (lenght <= 100)
		return (lenght / 3);
	else if (lenght <= 200)
		return (lenght / 4);
	return (mid);
}

void	ft_push_forward(t_stack **tst_a, t_stack **tst_b, int *mid, int *size_b)
{
	int	arr[MAX_STACK];

	while (*tst_a)
	{
		stack_to_array(*tst_a, mid[2], arr);
		if ((*tst_a)->data < mid[1])
		{
			p_a_b(tst_b, tst_a, "pb\n");
			mid[2] -= 1;
			size_b[0] += 1;
		}
		else if (arr[(mid[2]) - 1] < mid[1])
			rr_a_b(tst_a, "rra\n");
		else if (size_b[0] == mid[0])
		{
			size_b[1] += size_b[0];
			return ;
		}
		else
			ft_adjust_s_a(tst_a, find_next_match_s_a(arr, mid[2], mid[1]),
				mid[2]);
	}
}

void	ft_push_back(t_stack **tab_stack_a, t_stack **tab_stack_b, int size_b)
{
	int	arr_sorted[MAX_STACK];
	int	arr[MAX_STACK];

	while (*tab_stack_b)
	{
		stack_sorted_arr(*tab_stack_b, size_b, arr_sorted);
		stack_to_array(*tab_stack_b, size_b, arr);
		if ((*tab_stack_b)->data == arr_sorted[(size_b - 1)])
		{
			p_a_b(tab_stack_a, tab_stack_b, "pa\n");
			size_b -= 1;
		}
		else
			ft_adjust(tab_stack_b, find_next_match(arr, size_b,
					arr_sorted[(size_b - 1)]), size_b);
	}
}

void	last_adjust(t_stack **tab_stack_a, t_stack **tab_stack_b, int size_b)
{
	ft_sort_min_three(tab_stack_a);
	if (size_b == 2)
	{
		if ((*tab_stack_b)->data < (*tab_stack_b)->next->data)
			s_a_b(tab_stack_a, "sb\n");
	}
	while (*tab_stack_b)
		p_a_b(tab_stack_a, tab_stack_b, "pa\n");
	free(tab_stack_b);
}
