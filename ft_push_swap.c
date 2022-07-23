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

int	is_args_int(int lenght, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	while (i < lenght)
	{
		j = 0;
		while (argv[i + 1][j] != '\0')
		{
			if (!(argv[i + 1][j] >= '0' && argv[i + 1][j] <= '9'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

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
				return (1);
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
	if (argc <= 1 ||(is_args_int(lenght, argv) == 0))
	{
		write(1, "Error\n", 6);
		return (0);
	}
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
