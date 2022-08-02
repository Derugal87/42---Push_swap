/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderugo <aderugo@42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 23:19:46 by aderugo           #+#    #+#             */
/*   Updated: 2022/07/31 04:30:04 by aderugo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_list(t_node **a)
{
	t_node	*temp;

	temp = *a;
	while (temp != NULL)
	{
		ft_printf("d: %d, i: %d, p: %d\n", temp->data, temp->index, temp->pos);
		temp = temp->next;
	}
}
