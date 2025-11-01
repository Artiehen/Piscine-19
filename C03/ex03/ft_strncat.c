/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 11:40:21 by jhenriqu          #+#    #+#             */
/*   Updated: 2025/08/11 11:57:01 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char dest[] = "test";
	char src[] = "ing...";
	char dest1[] = "test";
	char src1[] = "ing...";

	unsigned int nb = 6;
	ft_strncat(dest, src, nb);
	printf("My ft_strncat is: %s\n", dest);
	strncat(dest1, src1, nb);
	printf("Strncat is: %s\n", dest1);


}*/
