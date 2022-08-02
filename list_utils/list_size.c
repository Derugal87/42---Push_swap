/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderugo <aderugo@42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 16:35:07 by aderugo           #+#    #+#             */
/*   Updated: 2022/07/31 04:29:52 by aderugo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstsize_ps(t_node **head)
{
	int	i;

	i = 1;
	if (*head == NULL)
		return (0);
	while ((*head)->next)
	{
		i++;
		(*head) = (*head)->next;
	}
	return (i);
}
