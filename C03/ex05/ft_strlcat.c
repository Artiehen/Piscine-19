/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 15:10:10 by jhenriqu          #+#    #+#             */
/*   Updated: 2025/08/11 16:41:13 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	ds;

	i = 0;
	ds = ft_strlen(dest);
	j = ft_strlen(src);
	if (ds >= size)
		return (j + size);
	while (src[i] != '\0' && i < (size - ds - 1))
	{
		dest[ds + i] = src[i];
		i++;
	}
	dest[ds + i] = '\0';
	return (j + ds);
}
/*
#include <stdio.h>
#include <bsd/string.h>
#include <string.h>
int main()

{
	char dest[20] = "testing";
	char src[20] = " this code...";
	char dest1[20] = "testing";
	char src1[20] = " this code...";
	unsigned int t;
	unsigned int m;

	m = ft_strlcat(dest, src, 50);
	printf("My function: %s\n", dest);
	t = strlcat(dest1, src1, 50);
	printf("OG function: %s\n", dest1);


}*/
