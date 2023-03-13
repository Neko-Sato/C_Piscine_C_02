/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satoneko <satoneko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:26:08 by hshimizu          #+#    #+#             */
/*   Updated: 2023/03/13 12:40:12 by satoneko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_lowercase(char c)
{
	return ('a' <= c && c <= 'z');
}

int	ft_str_is_lowercase(char *str)
{
	while (*str)
		if (!ft_char_is_lowercase(*(str++)))
			return (0);
	return (1);
}
