/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 09:38:43 by jhenriqu          #+#    #+#             */
/*   Updated: 2025/08/14 09:44:13 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	res = res * ft_recursive_power(nb, (power - 1));
	return (res);
}
/*
#include <stdio.h>
int main()
{
    int nb = 5;
    int pwr = 8;
    int res;
    res = ft_recursive_power(nb,pwr);
    printf("the power of %d is %d\n", nb, res);
}*/
