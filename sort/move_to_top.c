/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_to_top.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderugo <aderugo@42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:08:56 by aderugo           #+#    #+#             */
/*   Updated: 2022/08/22 01:56:50 by aderugo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	move_to_top_a(t_move *move, t_node **head)
{
	int len;
	t_node	*min;
	t_node	*temp;
	
	temp = *head;
	min = *head;
	len = ft_lstsize_ps(&temp);
	min = find_min_node(&min);
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
}

void	move_to_top_b(t_move *move, t_node **head)
{
	int len;
	t_node	*max;
	t_node	*temp;
	
	temp = *head;
	max = *head;
	len = ft_lstsize_ps(&temp);
	max = find_max_node(&max);
	count_move(move, len, max->index);
	if (move->step != 0)
	{
		while (move->step != 0)
		{
			if (move->route == 1)
				rb(head, 1);
			else
				rrb(head, 1);
			move->step--;
		}
	}
}

void	move_to_top_a_cur(t_move *move, t_node *head)
{
	int len;
	t_node	*current;
	t_node	*temp;
	
	temp = head;
	current = head;
	len = ft_lstsize_ps(&temp);
	count_move(move, len, current->index);
	if (move->step != 0)
	{
		while (move->step != 0)
		{
			if (move->route == 1)
				ra(&head, 1);
			else
				rra(&head, 1);
			move->step--;
		}
	}
}

void	move_to_top_b_cur(t_move *move, t_node *head)
{
	int len;
	t_node	*current;
	t_node	*temp;
	
	temp = head;
	current = head;
	len = ft_lstsize_ps(&temp);
	count_move(move, len, current->index);
	if (move->step != 0)
	{
		while (move->step != 0)
		{
			if (move->route == 1)
				rb(&head, 1);
			else
				rrb(&head, 1);
			move->step--;
		}
	}
}