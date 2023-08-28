/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:11:41 by mdanish           #+#    #+#             */
/*   Updated: 2023/07/04 11:11:44 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_strchr(char const *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (unsigned char)c)
		return ((char *)s);
	return (0);
}

// int main()
// {
// 	char *s;
// 	printf("%s\n", ft_strchr(s, 'd'));
// }