/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 06:34:34 by fakouyat          #+#    #+#             */
/*   Updated: 2022/06/30 06:34:34 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

int	find_next_match(int *arr, int lenght, int max)
{
	int	i;

	i = 0;
	while (i < lenght)
	{
		if (arr[i] == max)
			break ;
		i++;
	}
	return (i);
}

void	ft_adjust(t_stack **tab_stack_a, int indice, int lenght)
{
	int	half_stack;

	half_stack = lenght / 2;
	if (indice <= half_stack)
	{
		while (indice > 0)
		{
			r_a_b(tab_stack_a, "rb\n");
			indice--;
		}
	}
	else
	{
		indice = lenght - indice ;
		while (indice > 0)
		{
			rr_a_b(tab_stack_a, "rrb\n");
			indice--;
		}
	}	
}

int	find_next_match_s_a(int *arr, int lenght, int max)
{
	int	i;
	int	j;

	i = 0;
	j = lenght - 1;
	while (i < lenght)
	{
		if (arr[i] < max)
			break ;
		else if (arr[j] < max)
			return (j);
		i++;
		j--;
	}
	return (i);
}

void	ft_adjust_s_a(t_stack **tab_stack_a, int indice, int lenght)
{
	int	half_stack;

	half_stack = lenght / 2;
	if (indice <= half_stack)
	{
		while (indice > 0)
		{
			r_a_b(tab_stack_a, "ra\n");
			indice--;
		}
	}
	else
	{
		indice = lenght - indice ;
		while (indice > 0)
		{
			rr_a_b(tab_stack_a, "rra\n");
			indice--;
		}
	}	
}
