/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 14:01:31 by jhenriqu          #+#    #+#             */
/*   Updated: 2025/08/13 09:54:38 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nmb;

	i = 0;
	while ((str[i] != '\0' && str[i] >= 9 && str[i] <= 13) || str[i] == 32)
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
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		nmb = 10 * nmb + (str[i] - 48);
		i++;
	}
	return (nmb * sign);
}
/*
#include <stdlib.h>
#include <stdio.h>
int main ()
{
	char str[] = "  ---+--+1234ab567";
	int nmb;
	char str2[] = "  -1234ab567";
	long int nmb2;
	
	

	nmb = ft_atoi(str);
	printf("My atoi: %d\n", nmb);
	nmb2 = strtol(str2, NULL, 10);
	printf("OG atoi: %ld\n", nmb2);


}*/
