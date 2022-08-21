/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderugo <aderugo@42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 17:23:44 by aderugo           #+#    #+#             */
/*   Updated: 2022/08/21 19:41:43 by aderugo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_5(t_node **a, t_node **b, t_move *move)
{
	int	i;

	i = -1;
	while (++i < 2)
	{
		move_to_top(move, a);
		pb(a, b);
		reset_i(a);
	}
	sort_3(a);
	if (check_sort(b) == 0)
		sa(*b, 1);
	pa(a, b);
	pa(a, b);
	reset_i(a);
}