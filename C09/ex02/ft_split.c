/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <jhenriqu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 13:35:44 by jhenriqu          #+#    #+#             */
/*   Updated: 2025/08/26 17:03:26 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	word_cnt_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !is_charset(str[i], charset))
		i++;
	return (i);
}

char	*ft_adding(char *src, int size)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(char) * (size + 1));
	if (!dest)
		return (NULL);
	while (src[i] && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	word_cnt(char *str, char *charset)
{
	int	i;
	int	cnt;
	int	wlen;

	i = 0;
	cnt = 0;
	wlen = 0;
	while (str[i])
	{
		while (str[i] && is_charset(str[i], charset))
			i++;
		wlen = word_cnt_len(str + i, charset);
		if (wlen)
			cnt++;
		i = i + wlen;
		wlen = 0;
	}
	return (cnt);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		wlen;
	int		wc;
	char	**tab;

	wc = word_cnt(str, charset);
	tab = malloc(sizeof(char *) * (wc + 1));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	wlen = 0;
	while (str[i])
	{
		while (str[i] && is_charset(str[i], charset))
			i++;
		wlen = word_cnt_len(str + i, charset);
		if (wlen)
			tab[j++] = ft_adding(str + i, wlen);
		i = i + wlen;
		wlen = 0;
	}
	tab[j] = 0;
	return (tab);
}
/*
#include <stdio.h>
int	main()
{
	char str[] = "The sword of evils bane";
	char charset[] = "o";
	char **res;
	int i;

	i = 0;
	res =ft_split(str, charset);
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
	return (0);
}*/
