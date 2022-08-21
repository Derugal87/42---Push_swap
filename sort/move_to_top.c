/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_to_top.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderugo <aderugo@42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:08:56 by aderugo           #+#    #+#             */
/*   Updated: 2022/08/21 18:59:19 by aderugo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	move_to_top(t_move *move, t_node **head)
{
	int len;
	t_node	*min;
	t_node	*temp;
	
	temp = *head;
	len = ft_lstsize_ps(&temp);
	min = find_min_node(head);
	count_move(move, len, min->index);
	if (move->step != 0)
	{
		while (move->step != 0)
		{
			if (move->route == 1)
				ra(head, 1);
			else
				rra(head, 1);
			move->step--;
		}
	}
	reset_i(head);
}
	