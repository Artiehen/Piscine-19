/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 17:51:31 by jhenriqu          #+#    #+#             */
/*   Updated: 2025/08/13 09:48:34 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (str[i] != '\0' && str[i] >= 9 && str[i] <= 13 || str[i] == 32)
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

int	ftinbase(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (0);
}

int	ftonbase(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	nmb;

	i = 0;
	if (base_check(base) == 0 || ft_strlen(base) <= 1)
		return (0);
	while (str[i] != '\0' && (str[i] >= 9 && str[i] <= 13 || str[i] == 32))
	{
		i++;
	}
	sign = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	nmb = 0;
	while (str[i] != '\0' && ftonbase(str[i], base))
	{
		nmb = nmb * ft_strlen(base) + (ftinbase(str[i], base));
		i++;
	}
	return (nmb * sign);
}
/*
#include <stdlib.h>
//#include <stdio.h>
int main ()
{
	char str[] = "  ---+--+123ab567";
	char base[] = "0123456789abcdef";
	char base1[] = "01";
	char base2[] = "0123456789ABCDEF";
	char base3[] = "poneyvif";

	int nmb;
	int nmb1;
	int nmb2;
	int nmb3;

	nmb = ft_atoi_base(str,base);
	nmb1 = ft_atoi_base(str,base1);
	nmb2 = ft_atoi_base(str,base2);
	nmb3 = ft_atoi_base(str,base3);
	printf("Atoi base: %d\n", nmb);
	printf("Atoi base: %d\n", nmb1);
	printf("Atoi base: %d\n", nmb2);
	printf("Atoi base: %d\n", nmb3);


	}*/
