/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_to_top.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderugo <aderugo@42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:08:56 by aderugo           #+#    #+#             */
/*   Updated: 2022/08/30 07:43:55 by aderugo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	do_move(t_move *move, int len, int index, t_node **head)
{
	count_move(move, len, index);
	if (move->step == 0)
		return ;
	while (move->step != 0)
	{
		if (move->route == 1)
			ra(head, 1);
		else
			rra(head, 1);
		move->step--;
	}
}

void	move_to_top_min(t_move *move, t_node **head)
{
	int		len;
	int		min_data;
	t_node	*min;
	t_node	*temp;
	t_node	*current;

	temp = *head;
	min = *head;
	current = *head;
	len = ft_lstsize_ps(&temp);
	min_data = find_min_node(&min);
	while (current->data != min_data)
		current = current->next;
	do_move(move, len, current->index, head);
}

void	move_to_top_max(t_move *move, t_node **head)
{
	int		len;
	int		max_data;
	t_node	*max;
	t_node	*temp;
	t_node	*current;

	temp = *head;
	max = *head;
	current = *head;
	len = ft_lstsize_ps(&temp);
	max_data = find_max_node(&max);
	while (current->data != max_data)
		current = current->next;
	do_move(move, len, current->index, head);
}

void	move_to_top_cur(t_move *move, t_node **a, t_node **b, int pos)
{
	int		len;
	t_node	*current;
	t_node	*temp;

	reset_i(a);
	temp = *a;
	current = *a;
	len = ft_lstsize_ps(&temp);
	while (current->pos != pos)
		current = current->next;
	do_move(move, len, current->index, a);
	pb(a, b);
}
