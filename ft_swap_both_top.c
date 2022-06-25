/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_both_top.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 22:56:55 by fakouyat          #+#    #+#             */
/*   Updated: 2022/06/25 22:56:55 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

void    ft_swap_both_top(t_stack **stack_a, t_stack **stack_b)
{
    ft_swap_top(stack_a);
    ft_swap_top(stack_b);
}