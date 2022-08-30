/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderugo <aderugo@42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 17:56:33 by aderugo           #+#    #+#             */
/*   Updated: 2022/08/30 13:36:12 by aderugo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	list_sort(t_node *a, t_node *b, int size)
{
	t_move	*move;

	move = NULL;
	if (check_sort(&a) == 0)
		exit(1);
	move = malloc(sizeof(t_move));
	if (!move)
		return ;
	b = NULL;
	if (size == 2)
		sort_2(&a);
	else if (size == 3)
		sort_3(&a);
	else if (size == 4)
		sort_4(&a, &b, move);
	else if (size == 5)
		sort_5(&a, &b, move);
	else if (size < 23)
		sort_less_23(&a, &b, move);
	else
		sort_more(&a, &b, move);
	
}
