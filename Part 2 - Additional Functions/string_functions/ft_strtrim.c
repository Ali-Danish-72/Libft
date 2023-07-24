/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:58:49 by mdanish           #+#    #+#             */
/*   Updated: 2023/07/10 16:58:51 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*trim(char const *s, int s_len, int j)
{
	int		i;
	char	*trimmed;

	i = 0;
	trimmed = (char *)malloc(sizeof(char) * (s_len - j + 1));
	if (!trimmed)
		return (NULL);
	if (s_len - j)
	{
		while (j < s_len)
			trimmed[i++] = s[j++];
	}
	trimmed[i] = '\0';
	return (trimmed);
}

char	*ft_strtrim(char const *s, char const *set)
{
	int		i;
	int		j;
	int		s_len;

	if (!s)
		return (NULL);
	if (!set || !*set)
		return (ft_strdup(s));
	i = -1;
	j = 0;
	s_len = ft_strlen(s);
	while (set[++i] && j < s_len)
	{
		if (s[j] && s[j] == set[i])
		{
			i = -1;
			j++;
		}
		else if (s[s_len - 1] == set[i])
		{
			i = -1;
			s_len--;
		}
	}
	return (trim(s, s_len, j));
}
