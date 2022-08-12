/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_limit_node.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderugo <aderugo@42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 22:30:49 by aderugo           #+#    #+#             */
/*   Updated: 2022/08/12 15:40:48 by aderugo          ###   ########.fr       */
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
		if (temp->data > temp->next->data && !flag)
		{
			max_node = temp;
			flag = 1;
		}
		else if ((temp->data > temp->next->data) && flag && (max_node->data < temp->data))
			max_node = temp;
		temp = temp->next;
	}
	if ((temp->next == NULL) && (max_node->data < temp->data))
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
		if (temp->data < temp->next->data && !flag)
		{
			min_node = temp;
			flag = 1;
		}
		else if ((temp->data < temp->next->data) && flag && (min_node->data > temp->data))
			min_node = temp;
		temp = temp->next;
	}
	if ((temp->next == NULL) && (min_node->data > temp->data))
		min_node = temp;
	return (min_node);
}
