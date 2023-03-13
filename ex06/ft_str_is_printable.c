/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satoneko <satoneko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:26:08 by hshimizu          #+#    #+#             */
/*   Updated: 2023/03/13 12:41:47 by satoneko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_printable(char c)
{
	return (0x20 <= c && c < 0x7f);
}

int	ft_str_is_printable(char *str)
{
	while (*str)
		if (!ft_char_is_printable(*(str++)))
			return (0);
	return (1);
}
