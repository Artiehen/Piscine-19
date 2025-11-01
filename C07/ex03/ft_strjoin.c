/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <jhenriqu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 18:50:49 by jhenriqu          #+#    #+#             */
/*   Updated: 2025/08/19 13:13:35 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	ft_tlen(int size, char **strs, char *sep)
{
	int	i;
	int	slen;
	int	tlen;

	i = 0;
	tlen = 0;
	slen = ft_strlen(sep);
	while (i < size)
	{
		tlen = tlen + ft_strlen(strs[i]);
		i++;
	}
	if (size > 1)
		tlen = tlen + slen * (size - 1);
	return (tlen);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		tlen;

	i = 0;
	if (size == 0)
	{
		str = malloc(1);
		*str = '\0';
		return (str);
	}
	tlen = ft_tlen(size, strs, sep) + 1;
	str = malloc(tlen * sizeof(char));
	if (str == NULL)
		return (NULL);
	*str = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char *strs[5];
	strs[0] = "Hello";
	strs[1] = "my";
	strs[2] = "sweetest";
	strs[3] = "dearest";
	strs[4] = "friend";

	printf("My new string is: %s", ft_strjoin(5, strs, " "));




}*/
