/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 01:43:30 by fakouyat          #+#    #+#             */
/*   Updated: 2022/07/04 01:43:30 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

void	ft_sort(t_stack **tab_stack_a, int lenght)
{
	if (is_sorted(*tab_stack_a, lenght) == 1)
		return ;
	if (lenght == 2)
		ft_sort_min_two(tab_stack_a);
	else if (lenght == 3)
		ft_sort_min_three(tab_stack_a);
	else if (lenght > 3 && lenght <= 5)
		ft_sort_min_five(tab_stack_a, lenght);
	else if (lenght > 5)
		ft_sort_big(tab_stack_a, lenght);
}
