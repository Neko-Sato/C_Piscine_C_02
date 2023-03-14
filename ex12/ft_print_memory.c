/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:48:43 by satoneko          #+#    #+#             */
/*   Updated: 2023/03/14 13:24:34 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_putstr_non_printable(char *str, char *fill, unsigned int size)
{
	while (size--)
	{
		if ((0x20 <= *str && *str < 0x7f))
			write(1, str, 1);
		else
			write(1, fill, 1);
		str++;
	}
}

void	*ft_print_memory_line(void *addr, unsigned int size)
{
	void	*_addr;

	_addr = addr;
	print_hex_num((long)_addr, 0x10);
	write(1, ": ", 2);
	while (addr < _addr + 0x10)
	{
		if (addr < _addr + size)
			print_hex_num(*(char *)addr, 0b10);
		else
			write(1, "  ", 2);
		if (((long)addr - (long)_addr) % 2)
			write(1, " ", 1);
		addr++;
	}
	size = 0x10 - (_addr + size < addr) * (addr - _addr - size);
	ft_putstr_non_printable(_addr, ".", size);
	return (addr);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	void	*_addr;

	_addr = addr;
	while (_addr + size > addr)
	{
		ft_print_memory_line(addr, _addr + size - addr);
		addr += 0x10;
		write(1, "\n", 1);
	}
	return (addr);
}
