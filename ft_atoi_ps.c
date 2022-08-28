/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_ps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderugo <aderugo@42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:47:02 by aderugo           #+#    #+#             */
/*   Updated: 2022/08/26 18:45:39 by aderugo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi_ps(const char *str)
{
	long	result;
	long	current;
	int		flag;

	result = 0;
	current = 0;
	flag = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			flag = -1;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		result *= 10;
		result += *str++ - '0';
		current = result;
		if (result > INT_MAX && flag == 1)
		{
			ft_printf("Error\n");
			exit(1);
		}
		if (((result - 1) > INT_MAX) && flag == -1)
		{
			ft_printf("Error\n");
			exit(1);
		}
	}
	result *= flag;
	return (result);
}