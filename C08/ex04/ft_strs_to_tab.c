/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <jhenriqu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 11:24:31 by jhenriqu          #+#    #+#             */
/*   Updated: 2025/08/25 10:44:37 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

void	ft_show_tab(struct s_stock_str *par);

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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;

	dup = malloc(ft_strlen(src) + 1);
	if (dup == NULL)
		return (NULL);
	ft_strcpy(dup, src);
	return (dup);
}

void	free_mem(struct s_stock_str *tab)
{
	int	i;

	i = 0;
	while (tab[i].str)
	{
		if (tab[i].copy)
			free(tab[i].copy);
		i++;
	}
	free(tab);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	i = 0;
	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		if (!tab[i].copy)
		{
			free_mem(tab);
			return (NULL);
		}
		i++;
	}
	tab[i].size = 0;
	tab[i].str = 0;
	tab[i].copy = 0;
	return (tab);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
	t_stock_str *dest;
	int i;

	dest = ft_strs_to_tab(argc - 1, argv + 1);
	i = 0;
	while (i < argc - 1)
	{

		i++;
	}
	ft_show_tab(ft_strs_to_tab(argc - 1, argv + 1));
	return (0);
}

int main()
{
	char *strs[5];
	
	char *str0 = "The";
	char *str1 = "sword";
	char *str2 = "of";
	char *str3 = "evils";
	char *str4= "bane";

	strs[0] = str0;
	strs[1] = str1;
	strs[2] = str2;
	strs[3] = str3;
	strs[4] = str4;

	ft_show_tab(ft_strs_to_tab(5, strs));




}*/
