/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderugo <aderugo@42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:45:07 by aderugo           #+#    #+#             */
/*   Updated: 2022/08/02 15:17:08 by aderugo          ###   ########.fr       */
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
	final_argv = get_final_argv(argv);
	while (final_argv[i])
		printf("%s", final_argv[i]);
	size = get_final_size(final_argv);
	if (argc <= 2)
	{
		ft_printf("Error\n");
		exit(1);
	}
	a = NULL;
	b = NULL;
	size = argc - 1;
	check_param(argv);
	arr = malloc(size * sizeof(int));
	i = -1;
	while (++i < size)
		arr[i] = ft_atoi(argv[i + 1]);
	i = size - 1;
	while (i >= 0)
		push(&a, arr[i--], 0, 0);
	reset_i(&a);
	check_dubl(arr, size);
	sort_int_arr(arr, size);
	set_pos(&a, arr, size);
	print_list(&a);
	ra(&a, 1);
	reset_i(&a);
	printf("\n");
	print_list(&a);
	printf("\n");
	// reset_i(&b);
	// print_list(&b);
	return (0);
}
