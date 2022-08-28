/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderugo <aderugo@42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:35:07 by aderugo           #+#    #+#             */
/*   Updated: 2022/08/27 20:41:09 by aderugo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstsize_ps(t_node **head)
{
	int	size;
	t_node *current;

	size = 0;
	current = *head;
	while (current)
	{
		current = current->next;
		size++;
	}
	return (size);
}
