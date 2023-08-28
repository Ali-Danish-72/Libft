/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 08:49:38 by mdanish           #+#    #+#             */
/*   Updated: 2023/07/05 08:49:40 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_strdup(char const *s1)
{
	int		i;
	char	*dup;

	i = ft_strlen(s1);
	dup = (char *)malloc(sizeof(char) * i + 1);
	if (!dup)
		return (NULL);
	i = -1;
	while (s1[++i])
		dup[i] = s1[i];
	dup[i] = '\0';
	return (dup);
}
