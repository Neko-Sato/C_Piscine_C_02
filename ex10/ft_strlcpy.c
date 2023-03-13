/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satoneko <satoneko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 13:48:58 by satoneko          #+#    #+#             */
/*   Updated: 2023/03/13 13:26:11 by satoneko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	n;

	n = 0;
	while (n < size - 1)
	{
		*dest++ = *src++;
		n++;
	}
	*dest++ = '\0';
	return (n);
}
