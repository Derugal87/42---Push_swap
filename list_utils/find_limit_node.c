/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_limit_node.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderugo <aderugo@42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 22:30:49 by aderugo           #+#    #+#             */
/*   Updated: 2022/08/22 01:28:50 by aderugo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*find_max_node(t_node **head)
{
	t_node	*temp;
	t_node	*max_node;
	int		flag;

	if (!head)
		return (NULL);
	temp = *head;
	flag = 0;
	while (temp->next != NULL)
	{
		if (temp->data > temp->next->data && (flag == 0))
		{
			max_node = temp;
			flag = 1;
		}
		else if ((temp->data > temp->next->data) && (flag == 1) && (max_node->data < temp->data))
			max_node = temp;
		temp = temp->next;
	}
	if ((*head)->data < temp->data)
		max_node = temp;
	return (max_node);
}

t_node	*find_min_node(t_node **head)
{
	t_node	*temp;
	t_node	*min_node;
	int		flag;

	if (!head)
		return (NULL);
	temp = *head;
	flag = 0;
	while (temp->next != NULL)
	{
		if (temp->data < temp->next->data && (flag == 0))
		{
			min_node = temp;
			flag = 1;
		}
		else if ((temp->data < temp->next->data) && (flag == 1) && (min_node->data > temp->data))
			min_node = temp;
		temp = temp->next;
	}
	if ((*head)->data > temp->data)
		min_node = temp;
	return (min_node);
}
