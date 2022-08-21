/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderugo <aderugo@42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 17:56:33 by aderugo           #+#    #+#             */
/*   Updated: 2022/08/21 19:54:06 by aderugo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void		list_sort(t_node *a, t_node *b, int size)
{
	t_move *move;
	
	if (check_sort(&a) == 0)
		exit(1);
	move = malloc(sizeof(t_move));
	if (!move)
		return ;
	init_struct(move);
	b = NULL;
	if (size == 2)
		sort_2(&a);
	else if (size == 3)
		sort_3(&a);
	else if (size == 4)
		sort_4(&a, &b, move);
	else if (size == 5)
		sort_5(&a, &b, move);
	// else if (size < 100)
	// 	sort_100(&a, &b, move);
	else
	{
		ft_printf("hello");
	}
}

void init_struct(t_move *move)
{
	move->step = 0;
	move->route = 0;
}