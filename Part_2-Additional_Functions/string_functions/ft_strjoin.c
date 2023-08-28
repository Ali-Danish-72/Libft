/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:51:56 by mdanish           #+#    #+#             */
/*   Updated: 2023/07/08 18:52:00 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len_s1;
	int		len_s2;
	int		total_len;
	char	*str;

	if (s1)
		len_s1 = ft_strlen(s1);
	else
		len_s1 = 0;
	if (s2)
		len_s2 = ft_strlen(s2);
	else
		len_s2 = 0;
	total_len = len_s1 + len_s2;
	str = (char *)malloc(sizeof(char) * total_len + 1);
	if (!str)
		return (0);
	str[total_len] = '\0';
	while (len_s2-- > 0)
		str[--total_len] = s2[len_s2];
	while (len_s1-- > 0)
		str[--total_len] = s1[len_s1];
	return (str);
}
