/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quick_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 00:31:44 by fakouyat          #+#    #+#             */
/*   Updated: 2022/07/02 00:31:44 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

void	ft_push_swap_arr(int *arr, int i, int j)
{
	int	tmp;

	tmp = arr[j];
	arr[j] = arr[i];
	arr[i] = tmp;
}

int	*stack_sorted_arr(t_stack *tab_stack_a, int lenght)
{
	int	*arr;
	int	i;
	int	j;

	i = 0;
	arr = (int *)malloc(sizeof(int) * lenght);
	while (tab_stack_a)
	{
		arr[i] = tab_stack_a->data;
		i++;
		tab_stack_a = tab_stack_a->next;
	}
	i = 0;
	while (i < lenght - 1)
	{
		j = i + 1;
		while (j < lenght)
		{
			if (arr[i] > arr[j])
				ft_push_swap_arr(arr, i, j);
			j++;
		}
		i++;
	}
	return (arr);
}

int	*stack_to_array(t_stack *tab_stack_a, int lenght)
{
	int	*arr;
	int	i;

	i = 0;
	arr = (int *)malloc(sizeof(int) * lenght);
	while (tab_stack_a)
	{
		arr[i] = tab_stack_a->data;
		i++;
		tab_stack_a = tab_stack_a->next;
	}
	return (arr);
}

int	is_sorted(t_stack *tab_stack, int lenght)
{
	int	i;

	i = 0;
	while (i < lenght - 1)
	{
		if (tab_stack->data > (tab_stack->next)->data)
			return (0);
		tab_stack = tab_stack->next;
		i++;
	}
	return (1);
}
