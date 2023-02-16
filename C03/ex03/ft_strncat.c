/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iporfiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:17:56 by iporfiri          #+#    #+#             */
/*   Updated: 2022/07/27 13:55:56 by iporfiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				m;
	unsigned int	n;

	m = 0;
	while (dest[m] != '\0')
		m++;
	n = 0;
	while (src[n] != '\0' && n < nb)
	{
		dest[m] = src[n];
		m++;
		n++;
	}
	dest[m] = '\0';
	return (dest);
}
