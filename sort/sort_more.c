/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_more.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderugo <aderugo@42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 23:11:03 by aderugo           #+#    #+#             */
/*   Updated: 2022/08/28 07:12:54 by aderugo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void		sort_more(t_node **a, t_node **b, t_move *move, int chunk)
{
	t_node	*temp_a;
	t_node	*start_a;
	t_node	*temp_b;
	int	size_a;
	int size_b;
	
	temp_a = *a;
	start_a = *a;
	//print_list(a);
	size_a = ft_lstsize_ps(&temp_a);
	//ft_printf("size_a %d\n", size_a);
	while (size_a > 1)
	{
		// if ((*a)->pos > (*a)->next->pos)
		// 	sa(*a, 1);
		while (start_a != NULL)
		{
			if (start_a->pos < (chunk - 10))
			{
				//ft_printf("pos a %d\n", start_a->pos);
				reset_i(a);
				move_to_top_cur(move, a, start_a->pos);
				pb(a, b);
				rb(b, 1);
				size_a--;
				//ft_printf("size %d\n", size_a);
			}
			else if ((start_a->pos >= (chunk - 10) && (start_a->pos <= chunk)))
			{
				//ft_printf("pos a %d\n", start_a->pos);
				reset_i(a);
				move_to_top_cur(move, a,start_a->pos);
				pb(a, b);
				size_a--;
				//ft_printf("size %d\n", size_a);
			}
			start_a = start_a->next;
			//print_list(b);
			//ft_printf("\n");
			if (size_a == 1)
				break ;
		}
		//ft_printf("%d\n", size_a);
		start_a = *a;
		//start_a->next = *a;
		chunk += 20;
	}
	// reset_i(b);
	temp_b = *b;
	// sort_3(a);
	size_b = ft_lstsize_ps(&temp_b);
	while (size_b > 0)
	{
		reset_i(b);
		move_to_top_max(move, b);
		pa(a, b);
		size_b--;
	}
	reset_i(a);
	//print_list(a);
}
