/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:26:08 by hshimizu          #+#    #+#             */
/*   Updated: 2023/03/13 14:00:34 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_uppercase(char c)
{
	return ('A' <= c && c <= 'Z');
}

int	ft_str_is_uppercase(char *str)
{
	while (*str)
		if (!ft_char_is_uppercase(*(str++)))
			return (0);
	return (1);
}
