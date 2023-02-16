/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporfiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 16:02:30 by iporfiri          #+#    #+#             */
/*   Updated: 2022/07/22 14:56:07 by iporfiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	numbers;

	numbers = 48;
	while (numbers <= 57)
	{
		write(1, &numbers, 1);
		numbers++;
	}
}
