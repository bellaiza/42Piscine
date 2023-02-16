/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporfiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:42:15 by iporfiri          #+#    #+#             */
/*   Updated: 2022/07/28 16:42:20 by iporfiri         ###   ########.fr       */
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

	c = argc - 1;
	while (c >= 1)
	{
		ft_putstr (argv[c]);
		write (1, "\n", 1);
		c--;
	}
	return (0);
}
