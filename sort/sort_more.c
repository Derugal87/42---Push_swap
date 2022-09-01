/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_more.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderugo <aderugo@42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 23:11:03 by aderugo           #+#    #+#             */
/*   Updated: 2022/09/01 06:47:39 by aderugo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_back(t_node **a, t_node **b)
{
	int		size_b;
	t_move	move;

	size_b = ft_lstsize_ps(b);
	while (size_b > 0)
	{
		reset_i(b);
		move_to_top_max(&move, b);
		pa(a, b);
		size_b--;
	}
}

void	sort_more(t_node **a, t_node **b, t_move *move, int *arr)
{
	t_node	*start_a;
	int		temp;

	start_a = *a;
	temp = arr[0];
	while (arr[1] > 0)
	{
		while (start_a != NULL)
		{
			if (start_a->pos <= arr[0])
			{
				move_to_top_cur(move, a, b, start_a->pos);
				if (start_a->pos < (arr[0] - (temp / 2)))
					rb(b, 1);
				arr[1]--;
			}
			start_a = start_a->next;
			if (arr[1] == 0)
				break ;
		}
		start_a = *a;
		arr[0] += temp;
	}
	push_back(a, b);
}
