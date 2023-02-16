/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporfiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:14:23 by iporfiri          #+#    #+#             */
/*   Updated: 2022/07/28 14:16:51 by iporfiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char *argv[])
{
	int	c;

	c = 1;
	while (c < argc)
	{
		ft_putstr (argv[c]);
		write (1, "\n", 1);
	c++;
	}
	return (0);
}
