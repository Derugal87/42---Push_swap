/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderugo <aderugo@42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 06:43:26 by aderugo           #+#    #+#             */
/*   Updated: 2022/08/30 15:08:42 by aderugo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_list(t_node **head)
{
	t_node	*temp;

		printf("%d \n", (*head)->data);
	if (*head == NULL)
		return ;
	temp = *head;
	while (temp != NULL)
	{
		del_node(head);
		temp = *head;
	}
}
