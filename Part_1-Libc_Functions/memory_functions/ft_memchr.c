/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:11:47 by mdanish           #+#    #+#             */
/*   Updated: 2023/07/04 12:11:48 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	*ft_memchr(void const *s, int c, size_t n)
{
	char	*str;

	str = (char *)s;
	if (!n)
		return (0);
	while (n--)
	{
		if (*str == (char)c)
			return ((void *)str);
		str++;
	}
	return (0);
}
