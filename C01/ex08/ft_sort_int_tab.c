/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhenriqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:45:27 by jhenriqu          #+#    #+#             */
/*   Updated: 2025/08/07 17:18:14 by jhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	temp;

	a = 0;
	b = 0;
	while (a < size)
	{
		while (b < size)
		{
			if (tab[a] > tab[b])
			{
				temp = tab[a];
				tab[a] = tab[b];
				tab[b] = temp;
			}
			b++;
		}
		a++;
		b = a + 1;
	}
}
/*
int main()

{
	int tab[] = {6, 10, 8, 3, 5};
	int n = 5;

	printf("The original array is:\n");
       	printf("%d", tab[0]);
        printf("%d", tab[1]);
        printf("%d", tab[2]);
	printf("%d", tab[3]);
        printf("%d", tab[4]);

	printf("\n");
	ft_sort_int_tab(tab,n);
	printf("The sorted array is:\n");
	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]);
	printf("%d", tab[3]);
        printf("%d", tab[4]);
}
*/
