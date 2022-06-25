/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 19:33:29 by fakouyat          #+#    #+#             */
/*   Updated: 2022/06/24 19:33:29 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

int main(int argc, char *argv[])
{
    t_stack **tab_stack_a;
    t_stack **tab_stack_b;
    int     lenght;

    lenght = argc;
    tab_stack_a = ft_initialise(argv, lenght);
    tab_stack_b = ft_initialise(argv, lenght);
    //ft_swap_top(tab_stack_a);
    ft_swap_both_top(tab_stack_a, tab_stack_b);
    ft_push_top(tab_stack_a, tab_stack_b);

    while(*tab_stack_a && *tab_stack_b)
    {
        printf("node : %d   %d\n", (*tab_stack_a)->data, (*tab_stack_b)->data);
        *tab_stack_a = (*tab_stack_a)->next;
        *tab_stack_b = (*tab_stack_b)->next;
    }
    return(0);
}