/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_top.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 17:57:45 by fakouyat          #+#    #+#             */
/*   Updated: 2022/06/25 17:57:45 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

void  ft_swap_top(t_stack **stack)
{
    t_stack *second;
    t_stack  *third;
    t_stack  *first;

    third = (*stack)->next->next;
    second = (*stack)->next;
    first = *stack;
    second->next = first;
    *stack = second;
    (*stack)->next->next = third;
    (*stack)->next = first;
}