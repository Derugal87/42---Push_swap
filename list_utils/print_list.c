/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderugo <aderugo@42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 23:19:46 by aderugo           #+#    #+#             */
/*   Updated: 2022/08/29 17:13:04 by aderugo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_list(t_node **a)
{
	t_node	*temp;

	if (!a)
		return ;
	temp = *a;
	while (temp != NULL)
	{
		ft_printf("%d ", temp->data);
		temp = temp->next;
	}
}
