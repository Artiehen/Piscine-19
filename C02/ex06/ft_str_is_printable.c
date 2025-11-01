/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 15:28:05 by jhenriqu          #+#    #+#             */
/*   Updated: 2025/08/10 14:27:29 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32) && (str[i] <= 126))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
#include <stdio.h>

int	main()
	{
	int c;
	char str1[] = "T@st";
	char str2[] = "evkhnev";
	char s =  127;
	char str5[] = "ejrnvev";

	c = ft_str_is_printable("20");	
	printf("%d\n", &c);
	printf("%d\n", ft_str_is_printable(str1));
	printf("%d\n", ft_str_is_printable(str2));
	printf("%d\n", ft_str_is_printable(s));
	printf("%d\n", ft_str_is_printable(t));
	printf("%d\n", ft_str_is_printable(str5));
}*/
