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
    int     lenght;

    lenght = argc;
    tab_stack_a = ft_initialise(argv, lenght);
    if (!tab_stack_a)
    {
        write(1, "Error\n", 6);
        return (0);
    }
    if (is_sorted(*tab_stack_a, lenght) == 1)
        return (0);
    if (argc == 3)
        ft_sort_min_three(tab_stack_a);
    else if (argc == 4)
        ft_sort_min_three(tab_stack_a);
    else if (argc > 4 && argc <= 11)
        ft_sort_min_plus(tab_stack_a, lenght);
    else if (argc > 11 && argc <= 21)
        ft_sort_middle(tab_stack_a, lenght);
    else if (argc > 21 && argc <= 31)
        ft_sort_middle_plus(tab_stack_a, lenght);
    while (*tab_stack_a)
    {
        printf("%d\n", (*tab_stack_a)->data);
        *tab_stack_a = (*tab_stack_a)->next;
    }
    free(tab_stack_a);
    return(0);
}