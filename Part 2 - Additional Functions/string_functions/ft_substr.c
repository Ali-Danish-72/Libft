/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 17:58:28 by mdanish           #+#    #+#             */
/*   Updated: 2023/07/08 17:58:30 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		s_len;

	if (!s)
		return (0);
	if (!*s)
		len = 0;
	else
	{
		s_len = ft_strlen(s);
		if (s_len < len)
			len = s_len - start;
		if ((start + len) > s_len)
			len--;
		if (s_len < start || (len == (unsigned long)-1))
			len = 0;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len] = '\0';
	while (len--)
		*(str + len) = *(s + start + len);
	return (str);
}
