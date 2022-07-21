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

void	free_stack(t_stack **tab_stack)
{
	t_stack	*tmp;

	while (*tab_stack)
	{
		tmp = (*tab_stack)->next;
		free(*tab_stack);
		(*tab_stack) = tmp;
	}
	free(tmp);
	free(tab_stack);
}

int	check_redondance(t_stack **tab_stack_a, int lenght)
{
	int	arr[MAX_STACK];
	int	i;
	int	j;

	i = 0;
	stack_to_array(*tab_stack_a, lenght, arr);
	while (i < lenght - 1)
	{
		j = i + 1;
		while (j < lenght)
		{
			if (arr[i] == arr[j])
			{
				free(arr);
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	t_stack	**tab_stack_a;
	int		lenght;

	lenght = argc - 1;
	tab_stack_a = ft_initialise(argv, lenght + 1);
	if (!tab_stack_a || check_redondance(tab_stack_a, lenght) == 1)
	{
		write(1, "Error\n", 6);
		free_stack(tab_stack_a);
		return (0);
	}
	ft_sort(tab_stack_a, lenght);
	free_stack(tab_stack_a);
	return (0);
}
