/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialise.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 20:11:34 by fakouyat          #+#    #+#             */
/*   Updated: 2022/06/24 20:11:34 by fakouyat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

int	ft_atoi(const char *str)
{
	int		i;
	long	sign;
	long	number;
	long	result;

	i = 0;
	sign = 1;
	number = 0;
	while (str[i] == 32 || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	result = sign * number;
	if (result < -2147483648 || result > 2147483647)
		return (0);
	return ((int)number * sign);
}

t_stack	*ft_lstnew(int data)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	node->data = data;
	node->next = NULL;
	return (node);
}

t_stack	**ft_initialise(char *arr[], int lenght)
{
	t_stack	*node;
	t_stack	**tab_stack;
	int		i;
	int		data_int;		

	i = 0;
	tab_stack = malloc(sizeof(t_stack *) * (lenght - 1));
	if (!tab_stack)
	{
		free(tab_stack);
		return (0);
	}
	while (i < lenght - 1)
	{
		data_int = ft_atoi(arr[i + 1]);
		if ((data_int == 0) && (arr[i + 1][0] != '0'))
			return (NULL);
		node = ft_lstnew(data_int);
		tab_stack[i] = node;
		if (i > 0)
			(tab_stack[i - 1])->next = node;
		i++;
	}
	return (tab_stack);
}
