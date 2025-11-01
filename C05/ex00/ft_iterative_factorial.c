/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 11:59:53 by jhenriqu          #+#    #+#             */
/*   Updated: 2025/08/14 11:42:15 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)

{
	int	f;

	f = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (f > 1)
	{
		nb = nb * (f - 1);
		f--;
	}
	return (nb);
}
/*
#include <stdio.h>
int main()
{
	int fac = 9;
	int result;

	result = ft_iterative_factorial(fac);
	printf("%d", result);

}*/
