/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_less_23.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderugo <aderugo@42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 20:18:26 by aderugo           #+#    #+#             */
/*   Updated: 2022/08/28 07:26:32 by aderugo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void		sort_less_23(t_node **a, t_node **b, t_move *move)
{
	t_node	*temp_a;
	t_node	*temp_b;
	int	size_a;
	int size_b;

	temp_a = *a;
	size_a = ft_lstsize_ps(&temp_a);
	while (size_a > 3)
	{
		// if ((*a)->pos > (*a)->next->pos)
		// 	sa(*a, 1);
		reset_i(a);
		move_to_top_min(move, a);
		pb(a, b);
		size_a--;
	}
	// reset_i(b);
	temp_b = *b;
	size_b = ft_lstsize_ps(&temp_b);
	sort_3(a);
	while (size_b > 0)
	{
		reset_i(b);
		//move_to_top_b(move, b);
		pa(a, b);
		size_b--;
	}
	reset_i(a);
	//print_list(a);
}
