/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satoneko <satoneko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:20:50 by hshimizu          #+#    #+#             */
/*   Updated: 2023/03/13 12:39:04 by satoneko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_numeric(char c)
{
	return ('0' <= c && c <= '9');
}

int	ft_str_is_numeric(char *str)
{
	while (*str)
		if (!ft_char_is_numeric(*(str++)))
			return (0);
	return (1);
}
