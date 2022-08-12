/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderugo <aderugo@42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 17:56:33 by aderugo           #+#    #+#             */
/*   Updated: 2022/08/12 18:13:02 by aderugo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void		list_sort(t_node *a, t_node *b, int size)
{
	b = NULL;
	
	if (size == 2)
	{
		sort_2(a);
	}
	else if (size == 3)
	{
		sort_3(a);
	}
	else if (size <= 5)
	{
		
	}
	else
	{
		
	}
}