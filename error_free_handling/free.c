/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderugo <aderugo@42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 06:01:25 by aderugo           #+#    #+#             */
/*   Updated: 2022/08/30 14:01:00 by aderugo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_1(char **arr)
{
	while (*arr != NULL)
	{
		free(*arr);
		arr++;
	}
	free(arr);
	exit(1);
}

void	free_2(char **arr)
{
	while (*arr != NULL)
	{
		free(*arr);
		arr++;
	}
	free(arr);
}

void	free_all_lists(t_node **a, t_node **b)
{
	free_list(a);
	free_list(b);
}
