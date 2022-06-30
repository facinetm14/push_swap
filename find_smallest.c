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

int find_smallest(t_stack *tab_stack)
{
    int     min;

    min = tab_stack->data;
    while (tab_stack)
    {
        if (tab_stack->data < min)
            min = tab_stack->data;
        tab_stack = tab_stack->next;
    }
    return (min);
}
