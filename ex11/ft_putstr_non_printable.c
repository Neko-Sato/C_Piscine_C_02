/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 17:52:36 by hshimizu          #+#    #+#             */
/*   Updated: 2023/03/13 14:01:48 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_char_is_printable(char c)
{
	return (0x20 <= c && c < 0x7f);
}

void	print_hex_num(int num, int fill)
{
	char	c;

	if (!fill)
		return ;
	c = num & 0xf;
	c = c + '0' + (9 < c) * 0x27;
	print_hex_num(num >> 4, fill - 1);
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (ft_char_is_printable(*str))
			write(1, str, 1);
		else
		{
			write(1, "\\", 1);
			print_hex_num(*str, 2);
		}
		str++;
	}
}
