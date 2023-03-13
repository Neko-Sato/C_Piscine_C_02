/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satoneko <satoneko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 15:45:37 by hshimizu          #+#    #+#             */
/*   Updated: 2023/03/13 12:58:59 by satoneko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	change_lower_upper(char *c, int flag)
{
	*c += 0x20 * (-(flag && 'a' <= *c && *c <= 'z') + (!flag && 'A' <= *c
				&& *c <= 'Z'));
}

char	*ft_strlowcase(char *str)
{
	char	*_str;

	_str = str;
	while (*str)
		change_lower_upper(str++, 0);
	return (_str);
}
