/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderugo <aderugo@42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:00:16 by aderugo           #+#    #+#             */
/*   Updated: 2022/08/28 08:34:55 by aderugo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		get_final_size(char **final_argv)
{
	int	i;

	i = 0;
	if (!final_argv)
		return (0);
	while (final_argv[i])
		i++;
	return (i);
}

char	**get_final_argv(int argc, char **argv)
{
	int i;
	char *str;
	char **arr;

	i = 1;
	str = NULL;
	arr = NULL;
	if (argc == 2 && ft_strlen(argv[1]) == 0)
		exit(1);
	if (argc == 2 && (ft_isdigit(argv[1][0]) == 0))
	{
		ft_printf("Error\n");
		exit(1);
	}
	else if (argc == 2)
		arr = ft_split(argv[i], ' ');
	else 
	{
		while (i < argc)
		{
			str = ft_strjoin_gnl(str, argv[i]);
			str = ft_strjoin_gnl(str, " ");
			i++;
		}
		arr = ft_split(str, ' ');
	}
	if (!arr)
		exit(1);
	return (arr);
}

void	check_param(char **argv)
{
	int	i;
	int	k;
	int	flag_p;
	int flag_m;

	i = 0;
	
	while (argv[++i])
	{
		k = -1;
		flag_p = 0;
		flag_m = 0;
		while (argv[i][++k] != '\0')
		{
			if (ft_isdigit(argv[i][k]) == 0)
			{
				if (argv[i][k] == '-' && !flag_p)
				{
					flag_p++;
					continue ;
				}
				else if (argv[i][k] == '+' && !flag_m)
				{
					flag_m++;
					continue ;
				}	
				else
				{
					ft_printf("Error\n");
					exit(1);
				}
			}
		}
	}
}

void	check_dubl(int *arr, int size)
{
	int		i;
	int		j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr[j])
			{
				ft_printf("Error\n");
				exit(1);
			}
			j++;
		}
		i++;
	}
}
