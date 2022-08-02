/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderugo <aderugo@42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 17:00:16 by aderugo           #+#    #+#             */
/*   Updated: 2022/08/02 15:58:30 by aderugo          ###   ########.fr       */
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


char	**get_final_argv(char **argv)
{
	int		i;
	int		j;
	int		k;
	int		n;
	static char	arr[10000][5];
	char	**temp;

	j = 0;
	k = 0;
	n = 0;
	i = 1;

	temp = NULL;
	while (argv[i])
	{
		while (argv[i][j])
		{
			if (argv[i][j] == ' ')
			{
				temp = ft_split(argv[i], ' ');
				while (temp[n])
				{
					ft_strlcpy(arr[k], temp[n], ft_strlen(arr[k]));
					// arr[k] = temp[n];
					k++;
					n++;
				}
				continue;
			}
			j++;
		}
		ft_strlcpy(arr[k], temp[n], ft_strlen(arr[k]));
		// arr[k] = argv[i];
		k++;
		i++;
	}
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
					ft_printf("Wrong parameter\n");
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
				ft_printf("dublicate error\n");
				exit(1);
			}
			j++;
		}
		i++;
	}
}
