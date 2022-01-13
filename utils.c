/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 00:42:56 by rchampli          #+#    #+#             */
/*   Updated: 2022/01/13 23:31:55 by rchampli         ###   ########.fr       */
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
	long	n;
	int		sign;

	n = 0;
	sign = 1;
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
		n = 10 * n + (*nptr++ - '0');
	}
	if (sign * n > INT_MAX || sign * n < INT_MIN)
		ft_error("Error");
	return (sign * (int)n);
}
