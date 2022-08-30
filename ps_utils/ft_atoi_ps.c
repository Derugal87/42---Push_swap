/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_ps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aderugo <aderugo@42abudhabi.ae>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:47:02 by aderugo           #+#    #+#             */
/*   Updated: 2022/08/30 08:06:52 by aderugo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_atoi_ps(const char *str)
{
	long	result;
	int		flag;

	result = 0;
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
	}
	if (ft_isdigit(*str) == 0 && *str)
		error_1();
	if (result > INT_MAX && flag == 1)
		error_1();
	if (((result - 1) > INT_MAX) && flag == -1)
		error_1();
	result *= flag;
	return (result);
}
