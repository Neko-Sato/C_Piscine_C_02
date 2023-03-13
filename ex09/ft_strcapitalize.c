/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satoneko <satoneko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:15:13 by satoneko          #+#    #+#             */
/*   Updated: 2023/03/13 13:01:36 by satoneko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	change_lower_upper(char *c, int flag)
{
	*c += 0x20 * (-(flag && 'a' <= *c && *c <= 'z') + (!flag && 'A' <= *c
				&& *c <= 'Z'));
}

int	ft_isalnum(char *c)
{
	return (('0' <= *c && *c <= '9') || ('A' <= *c && *c <= 'Z') || ('a' <= *c
			&& *c <= 'z'));
}

char	*ft_strcapitalize(char *str)
{
	char	*_str;

	_str = str;
	while (1)
	{
		if (ft_isalnum(str))
		{
			change_lower_upper(str++, 1);
			while (*(str) && ft_isalnum(str))
				change_lower_upper(str++, 0);
		}
		if (!*(str))
			break ;
		str++;
	}
	return (_str);
}
