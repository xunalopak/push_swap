/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchampli <rchampli@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 00:50:13 by rchampli          #+#    #+#             */
/*   Updated: 2022/01/13 23:02:08 by rchampli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

void	ft_error(char *str)
{
	int	n;

	n = 10;
	write(2, str, ft_strlen(str));
	write(2, &n, 1);
	exit(1);
}
