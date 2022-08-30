/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_more.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderugo <aderugo@42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 23:11:03 by aderugo           #+#    #+#             */
/*   Updated: 2022/08/30 02:18:00 by aderugo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	chunk_count(int size_a)
{
	if (size_a <= 250)
		return (30);
	else
		return (50);
}

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

void	sort_more(t_node **a, t_node **b, t_move *move)
{
	t_node	*start_a;
	int		temp;
	int		chunk;

	start_a = *a;
	chunk = chunk_count(ft_lstsize_ps(a));
	temp = chunk;
	while (ft_lstsize_ps(a) > 0)
	{
		while (start_a != NULL)
		{
			if (start_a->pos <= chunk)
			{
				move_to_top_cur(move, a, b, start_a->pos);
				if (start_a->pos < (chunk - (temp / 2)))
					rb(b, 1);
			}
			start_a = start_a->next;
			if (ft_lstsize_ps(a) == 0)
				break ;
		}
		start_a = *a;
		chunk += temp;
	}
	push_back(a, b);
}
