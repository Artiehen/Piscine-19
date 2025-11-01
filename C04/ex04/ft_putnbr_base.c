/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 15:19:51 by jhenriqu          #+#    #+#             */
/*   Updated: 2025/08/13 09:56:45 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	base_check(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str[i] == '\0' || str[i + 1] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	basel;
	int	nmb;

	basel = ft_strlen(base);
	if (base_check(base) == 0 || basel <= 1)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nmb = -nbr;
	}
	nmb = nbr;
	if (nmb >= basel)
	{
		ft_putnbr_base(nmb / basel, base);
		ft_putnbr_base(nmb % basel, base);
	}
	else
	{
		ft_putchar(base[nmb]);
	}
}
/*
int main()
{
	char base[] = "0123456789";
	char base1[] = "01";
	char base2[] = "0123456789ABCDEF";
	char base3[] = "poneyvif";
	int nmb = 123;

	ft_putnbr_base(nmb, base);
	ft_putchar('\n');
	ft_putnbr_base(nmb, base1);
	ft_putchar('\n');
	ft_putnbr_base(nmb, base2);
	ft_putchar('\n');
	ft_putnbr_base(nmb, base3);


}*/
