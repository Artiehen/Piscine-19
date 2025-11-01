/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <jhenriqu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 18:17:50 by jhenriqu          #+#    #+#             */
/*   Updated: 2025/08/19 11:05:44 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = malloc(sizeof(int) * (max - min));
	if (array == NULL)
	{
		*range = NULL;
		return (-1);
	}
	while (i < max - min)
	{
		array[i] = min + i;
		i++;
	}
	*range = array;
	return (i);
}
/*
#include <stdio.h>
int	main()
{
	int	*range;
	int	max = 20;
	int	min = 5;
	int	i;

	i = 0;
	printf("Range is: %d\n", ft_ultimate_range(&range, min, max));
	while (i < max - min)
	{
		printf("%d ", range[i]);
		i++;
	}
	free(range);
	return (0);

}*/
