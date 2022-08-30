/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderugo <aderugo@42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:45:07 by aderugo           #+#    #+#             */
/*   Updated: 2022/08/30 14:05:00 by aderugo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	prepare_and_sort(t_node *a, t_node *b, char **final_argv, int size)
{
	int		*arr;
	int		i;

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
	free(arr);
	// free_2(final_argv);
	list_sort(a, b, size);
}

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;
	int		size;
	char	**final_argv;

	a = NULL;
	b = NULL;
	check_param(argv);
	final_argv = get_final_argv(argc, argv);
	size = get_final_size(final_argv);
	prepare_and_sort(a, b, final_argv, size);
	free_all_lists(&a, &b);
	return (0);
}
