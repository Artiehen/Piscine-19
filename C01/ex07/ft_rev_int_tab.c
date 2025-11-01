/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 14:52:57 by jhenriqu          #+#    #+#             */
/*   Updated: 2025/08/07 16:43:37 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	temp;

	a = size - 1;
	b = 0;
	while (a > b)
	{
		temp = tab[a];
		tab[a] = tab[b];
		tab[b] = temp;
		a--;
		b++;
	}
}
/*
int main()
{
	int	tab[3] = { 1, 4, 3};
	int n = 3;

	printf("The original array is:\n");
       	printf("%d", tab[0]);
        printf("%d", tab[1]);
        printf("%d", tab[2]);

	ft_rev_int_tab(tab,n);
	printf("The reversed array is:\n");
	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]);


}
*/
