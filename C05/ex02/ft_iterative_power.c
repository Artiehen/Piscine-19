/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 12:34:15 by jhenriqu          #+#    #+#             */
/*   Updated: 2025/08/14 09:37:48 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	n;

	res = nb;
	n = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (n < power)
	{
		res = res * nb;
		n++;
	}
	return (res);
}
/*
#include <stdio.h>
int main()
{
    int n = 8;
    int pwr = 2;
    int res;
    res = ft_iterative_power(n,pwr);
    printf("the power of %d is %d\n",n ,res);
}*/
