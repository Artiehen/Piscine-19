/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <jhenriqu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 17:46:51 by jhenriqu          #+#    #+#             */
/*   Updated: 2025/08/19 10:23:07 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	array = NULL;
	if (min >= max)
		return (0);
	array = malloc(sizeof(int) * (max - min));
	if (array == NULL)
		return (0);
	while (i < (max - min))
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
/*
#include <stdio.h>
int main(void)
{
	int *tab;
	int min;
	int max;
	int i;

	min = 1;
	max = 7;
	tab = ft_range(min, max);
	i = 0;
	while (i < max - min)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("%d\n", tab[i]);
	free(tab);
	return (0);
}*/
