/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 00:42:56 by rchampli          #+#    #+#             */
/*   Updated: 2022/01/13 21:30:56 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr_fd(char *str, int fd)
{
	write(fd, str, ft_strlen(str));
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

static int	ft_isspace(int c)
{
	return (c == ' ' || (unsigned)c - '\t' < 5);
}

int	ft_atol(const char *nptr)
{
	long long	n;
	int			sign;
	long long	ll_check;

	n = 0;
	sign = 1;
	ll_check = LLONG_MAX / 10;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		if (sign == 1 && (n > ll_check || (n == ll_check && *nptr - '0' >= 7)))
			return (-1);
		if (sign == -1 && (n > ll_check || (n == ll_check && *nptr - '0' >= 8)))
			return (0);
		n = 10 * n + (*nptr++ - '0');
	}
	return (sign * (int)n);
}
