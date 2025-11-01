/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <jhenriqu@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 10:20:52 by jhenriqu          #+#    #+#             */
/*   Updated: 2025/08/27 13:23:08 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	tab_printer(int n, char t[])
{
	int	i;

	i = 0;
	while (i < n)
	{
		write(1, &t[i], 1);
		i++;
	}
	if (t[0] != '9' + 1 - n)
		write(1, ", ", 2);
}

void	ft_tab_handler(char t[], int n)
{
	int	i;

	i = 0;
	while (t[0] <= '9' + 1 - n)
	{
		tab_printer(n, t);
		i = n - 1;
		if (t[i] < '9')
			t[i]++;
		else
		{
			while (t[i] == '9' - (n - i - 1) && i > 0)
				i--;
			if (i >= 0)
			{
				t[i]++;
				while (i++ < n)
					t[i] = t[i - 1] + 1;
			}
		}
	}
}

void	ft_print_combn(int n)
{
	int		i;
	char	t[20];

	i = 0;
	t[0] = '0';
	while (i < n)
	{
		t[i] = '0' + i;
		i++;
	}
	ft_tab_handler(t, n);
}
/*
int	main()
{
	ft_print_combn(2);
	return (0);
}*/
