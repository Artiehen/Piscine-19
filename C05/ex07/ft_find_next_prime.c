/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 10:10:24 by jhenriqu          #+#    #+#             */
/*   Updated: 2025/08/14 11:38:01 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	if (nb == 2)
		return (1);
	if (nb < 2 || nb % 2 == 0)
		return (0);
	n = 3;
	while (n <= nb / n)
	{
		if (nb % n == 0)
			return (0);
		n = n + 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (ft_is_prime(nb) == 0 && nb <= 2147483647)
	{
		nb++;
	}
	return (nb);
}
/*
#include <stdio.h>
int main ()
{
    int nmb = 6;
    int res;
    res = ft_find_next_prime(nmb);
    printf("The number is %d\n", res);
}*/
