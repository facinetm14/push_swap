/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 19:18:01 by fakouyat          #+#    #+#             */
/*   Updated: 2022/06/24 19:18:01 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct  s_list
{
    int            data;
    struct s_list *next;   
} t_stack;

t_stack **ft_initialise(char *arr[], int lenght);
void    ft_swap_top(t_stack **stack);
void    ft_swap_both_top(t_stack **stack_a, t_stack **stack_b);
void    ft_push_top(t_stack **dest_stack, t_stack **src_stack);