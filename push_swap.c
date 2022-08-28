/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderugo <aderugo@42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:45:07 by aderugo           #+#    #+#             */
/*   Updated: 2022/08/26 18:53:18 by aderugo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reset_i(t_node **head)
{
	t_node	*temp;
	int		i;

	temp = *head;
	i = 1;
	while (temp != NULL)
	{
		temp->index = i;
		i++;
		temp = temp->next;
	}
}

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;
	int		*arr;
	int		i;
	int		size;
	char	**final_argv;

	i = 0;
	final_argv = NULL;
	final_argv = get_final_argv(argc, argv);
	size = get_final_size(final_argv);
	a = NULL;
	b = NULL;
	check_param(final_argv);
	arr = malloc(size * sizeof(int));
	i = -1;
	while (++i < size)
		arr[i] = ft_atoi_ps(final_argv[i]);
	i = size - 1;
	while (i >= 0)
		push(&a, arr[i--], 0, 0);
	reset_i(&a);
	check_dubl(arr, size);
	sort_int_arr(arr, size);
	set_pos(&a, arr, size);
	list_sort(a, b, size);
	return (0);
}
