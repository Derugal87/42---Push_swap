/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderugo <aderugo@42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 06:01:25 by aderugo           #+#    #+#             */
/*   Updated: 2022/09/03 08:42:53 by aderugo          ###   ########.fr       */
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

void	free_arr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

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

void	free_argv_exit(char **argv)
{
	int	i;

	i = 1;
	while (argv[i] != NULL)
	{
		free(argv[i]);
		i++;
	}
	exit(1);
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
