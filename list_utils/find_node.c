/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderugo <aderugo@42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 22:15:57 by aderugo           #+#    #+#             */
/*   Updated: 2022/07/30 22:35:04 by aderugo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*find_node(t_node **head, int data)
{
	t_node	*temp;

	temp = *head;
	while (temp != NULL)
	{
		if (temp->data == data)
			return (temp);
		temp = temp->next;
	}
	return (NULL);
}

void	set_pos(t_node **head, int *arr, int size)
{
	t_node	*temp;
	int		i;

	i = 0;
	while (i < size)
	{
		temp = find_node(head, arr[i]);
		temp->pos = i + 1;
		i++;
	}
}