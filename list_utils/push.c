/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderugo <aderugo@42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 19:15:07 by aderugo           #+#    #+#             */
/*   Updated: 2022/09/01 05:22:28 by aderugo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_node **head, int data, int index, int pos)
{
	t_node	*temp;

	temp = malloc(sizeof(t_node));
	temp->data = data;
	temp->index = index;
	temp->pos = pos;
	temp->next = (*head);
	*head = temp;
	//free(temp);
}
