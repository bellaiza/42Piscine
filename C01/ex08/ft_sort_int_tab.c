/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporfiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:31:39 by iporfiri          #+#    #+#             */
/*   Updated: 2022/07/22 15:22:21 by iporfiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *x, int *y)
{
	int	c;

	c = *x;
	*x = *y;
	*y = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < (size - 1))
	{
			j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				swap(&tab[j + 1], &tab[j]);
			}
				j++;
		}
			i++;
	}
}
