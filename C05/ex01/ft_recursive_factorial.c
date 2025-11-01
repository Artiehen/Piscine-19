/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 12:22:15 by jhenriqu          #+#    #+#             */
/*   Updated: 2025/08/13 12:32:54 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>
int main()
{
	int fac = 0;
	int fac1 = 1;
	int fac2 = 5;
	int fac3 = 9;

	printf("factorial of %d is: %d\n", fac, ft_recursive_factorial(fac));
	printf("factorial of %d is: %d\n", fac1, ft_recursive_factorial(fac1));
	printf("factorial of %d is: %d\n", fac2, ft_recursive_factorial(fac2));
	printf("factorial of %d is: %d\n", fac3, ft_recursive_factorial(fac3));





}*/
