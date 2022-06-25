/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_top.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 23:16:36 by fakouyat          #+#    #+#             */
/*   Updated: 2022/06/25 23:16:36 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

void    ft_push_top(t_stack **dest_stack, t_stack **src_stack)
{
    //t_stack *tmp;
    t_stack *second;

    //tmp = *src_stack;
    second = *dest_stack;
    *dest_stack = *src_stack;
    (*dest_stack)->next = second;
    *src_stack =(*src_stack)->next;
    //fre(tmp);
}