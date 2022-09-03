/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderugo <aderugo@42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 06:01:25 by aderugo           #+#    #+#             */
/*   Updated: 2022/09/03 11:14:02 by aderugo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_argv(char **argv)
{
	int	i;

	i = 1;
	while (argv[i] != NULL)
	{
		free(argv[i]);
		i++;
	}
}

void	free_final_argv(char **final_argv)
{
	int	i;

	i = 0;
	while (final_argv[i] != NULL)
	{
		free(final_argv[i]);
		i++;
	}
	free(final_argv);
}

void	free_complex(int *arr, char **final_argv)
{
	free(arr);
	free(final_argv);
}
