/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 10:01:22 by jhenriqu          #+#    #+#             */
/*   Updated: 2025/08/14 10:09:20 by jhenriqu         ###   ########.fr       */
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
/*
#include <stdio.h>
int main ()
{
    int nmb = 7919;
    int res;
    res = ft_is_prime(nmb);
    if (res == 1)
    printf("The number is prime\n");
    else
    printf("the number is not prime\n");
}*/
