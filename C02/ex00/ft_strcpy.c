/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 10:10:32 by jhenriqu          #+#    #+#             */
/*   Updated: 2025/08/10 16:55:48 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char d[50] = {};
	char d1[50] = {};
	char s[] = "testing..";

	printf("The source is:\n");
	printf("%s\n", s);
	ft_strcpy(d,s);
	printf("the copy is:\n");
	printf("%s\n", d);
	printf("The ref source is:\n");
	printf("%s\n", s);
	strcpy(d1,s);
	printf("the ref copy is:\n");
	printf("%s\n", d);
}*/
