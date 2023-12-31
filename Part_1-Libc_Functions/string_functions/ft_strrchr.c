/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:38:19 by mdanish           #+#    #+#             */
/*   Updated: 2023/07/04 11:38:22 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_strrchr(char const *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if ((unsigned char)c == 0)
		return ((char *)(s + i));
	while (--i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)(s + i));
	}
	return (0);
}
