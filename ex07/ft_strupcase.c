/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satoneko <satoneko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:37:55 by hshimizu          #+#    #+#             */
/*   Updated: 2023/03/13 12:58:11 by satoneko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	change_lower_upper(char *c, int flag)
{
	*c += 0x20 * (-(flag && 'a' <= *c && *c <= 'z') + (!flag && 'A' <= *c
				&& *c <= 'Z'));
}

char	*ft_strupcase(char *str)
{
	char	*_str;

	_str = str;
	while (*str)
		change_lower_upper(str++, 1);
	return (_str);
}
