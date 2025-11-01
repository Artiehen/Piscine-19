/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 09:56:55 by jhenriqu          #+#    #+#             */
/*   Updated: 2025/08/14 10:00:21 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	res;

	i = 0;
	while (i * i <= nb && i <= 46340)
	{
		res = i * i;
		if (res == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
//    int sqrt = 1600000000;
    int sqrt = 16;
    int res;
    res = ft_sqrt(sqrt);
    printf("the square root is %d\n", res);
}*/
