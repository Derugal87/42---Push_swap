/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_more.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderugo <aderugo@42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 23:11:03 by aderugo           #+#    #+#             */
/*   Updated: 2022/08/22 10:14:40 by aderugo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void		sort_more(t_node **a, t_node **b, t_move *move)
{
	t_node	*temp_a;
	//t_node	*temp_b;
	int	size;
	int	chunk;
	int	i;

	temp_a = *a;
	i = 0;
	print_list(a);
	ft_printf("\n");
	size = ft_lstsize_ps(&temp_a);
	chunk = size / 20;
	if (chunk == 0)
	{
		while ((*a)->next != NULL)
		{
			move_to_top_a(move, a);
			reset_i(a);
			pb(a, b);
			ft_printf("\n");
			print_list(a);
			ft_printf("\n");
			print_list(b);
			(*a) = (*a)->next;
		}
	}
	//print_list(a);
	
	
	

	
	// t_node	*temp_a;
	// t_node	*temp_b;
	// t_node	*max;
	
	// // i - number of chunks
	// int	i;
	
	// // k - max number of chunk
	// int k;

	// // n - position number
	// int n;

	// // m - chunk border;
	// int m;
	
	// temp_a = *a;
	// temp_b = *b;
	// i = 1;
	// k = 0;
	// n = 1;
	// m = 5;
	// max = *a;
	// max = find_max_node(&max);

	// if ((max->index % 5) == 0)
	// 	k = max->index / 5;
	// else
	// 	k = (max->index / 5) + 1;
	// while (i < k)
	// {
	// 	while ((*a)->next != NULL)
	// 	{
	// 		if ((*a)->pos <= m)
	// 		{
	// 			move_to_top_a_cur(move, *a);
	// 			pb(a, b);
	// 			reset_i(a);
	// 			// if (ft_lstsize_ps(b) != 1)
	// 			// 	move_to_top_b(move, b);
	// 			print_list(a);
	// 			ft_printf("\n");
	// 			print_list(b);
	// 			ft_printf("\n");
	// 		}
	// 		else
	// 			*a = (*a)->next;
	// 	}
	// 	(*a)->next = temp_a;
	// 	m += 5;
	// 	i++;
	// }
	
	// if (ft_lstsize_ps(a) == 5)
	// 	sort_5(a, b, move);
	// else if (ft_lstsize_ps(a) == 4)
	// 	sort_4(a, b, move);
	// else if (ft_lstsize_ps(a) == 3)
	// 	sort_3(a);
	// else if (ft_lstsize_ps(a) == 2)
	// 	sort_2(a);
	// while (temp_b->next != NULL)
	// {
	// 	move_to_top_b(move, b);
	// 	pa(a, b);
	// 	temp_b = temp_b->next;
	// }

	
}
