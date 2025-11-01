/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 12:43:09 by jhenriqu          #+#    #+#             */
/*   Updated: 2025/08/13 09:50:12 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
	}
	else
		n = nb;
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		n = n % 10;
	}
	ft_putchar(n + 48);
}
/*
int main()
{
	int n = 42;
	int nm = 2147483647;
	int nmin = -2147483648;
	
	ft_putnbr(n);
	write (1, "\n", 1);
	ft_putnbr(nm);
	write (1, "\n", 1);
	ft_putnbr(nmin);
	write (1, "\n", 1);
}*/
