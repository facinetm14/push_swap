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
		s_a_b(tab_stack_a, "sa\n");
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

void	ft_sort_min_five(t_stack **tab_stack_a, int lenght,
			int arr[], int arr_sorted[])
{
	t_stack	**tab_stack_b;
	int		mid;
	int		size_b;

	tab_stack_b = malloc(sizeof(t_stack) * (lenght));
	stack_sorted_arr(*tab_stack_a, lenght, arr_sorted);
	mid = (lenght + 1) / 2;
	size_b = 0;
	while (*tab_stack_a && lenght > 3)
	{
		stack_to_array(*tab_stack_a, lenght, arr);
		if ((*tab_stack_a)->data < arr_sorted[mid - 1])
		{
			p_a_b(tab_stack_b, tab_stack_a, "pb\n");
			size_b++;
			lenght--;
		}
		else if (arr[lenght - 1] < arr_sorted[mid - 1])
			rr_a_b(tab_stack_a, "rra\n");
		else
			r_a_b(tab_stack_a, "ra\n");
	}
	last_adjust(tab_stack_a, tab_stack_b, size_b);
}

/**
* mid stores respectively : pivot's index, pivot's value, stack_a lenght
* size_b stores respectively : curent chunck size and stack_b size;
*/
void	ft_sort_big(t_stack **tab_stack_a, int lenght, int arr_sorted[])
{
	t_stack	**tab_stack_b;
	int		mid[3];
	int		size_b[2];

	tab_stack_b = malloc(sizeof(t_stack *) * lenght);
	size_b[1] = 0;
	mid[2] = lenght;
	mid[0] = lenght / 8;
	while (mid[2] > 1)
	{
		stack_sorted_arr(*tab_stack_a, mid[2], arr_sorted);
		mid[0] = find_pivot(mid[2], mid[0]);
		mid[1] = arr_sorted[(mid[0])];
		size_b[0] = 0;
		ft_push_forward(tab_stack_a, tab_stack_b, mid, size_b);
	}
	ft_push_back(tab_stack_a, tab_stack_b, size_b[1]);
	free(tab_stack_b);
}
