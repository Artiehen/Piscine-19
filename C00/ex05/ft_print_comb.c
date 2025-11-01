/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 16:55:49 by jhenriqu          #+#    #+#             */
/*   Updated: 2025/08/27 10:19:07 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	h;
	char	t;
	char	u;

	h = '0';
	while (h <= '7')
	{
		t = h + 1;
		while (t <= '8')
		{
			u = t + 1;
			while (u <= '9')
			{
				write (1, &h, 1);
				write (1, &t, 1);
				write (1, &u, 1);
				if (h != '7')
					write (1, ", ", 2);
				u++;
			}
			t++;
		}
		h++;
	}
}
/*
int main()
{
	ft_print_comb();
	return (0);


}*/
