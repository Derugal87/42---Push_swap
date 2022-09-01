/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderugo <aderugo@42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 06:43:26 by aderugo           #+#    #+#             */
/*   Updated: 2022/09/01 05:21:29 by aderugo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_list(t_node **head)
{
	t_node	*temp;

	if (*head == NULL)
		return ;
	temp = *head;
	while (temp != NULL)
	{
		del_node(head);
		temp = *head;
	}
}
