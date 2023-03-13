/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hshimizu <hshimizu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 10:35:15 by hshimizu          #+#    #+#             */
/*   Updated: 2023/03/13 14:00:19 by hshimizu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*_dest;

	_dest = dest;
	while (1)
	{
		*dest = *src;
		if (!*src)
			break ;
		dest++;
		src++;
	}
	return (_dest);
}
