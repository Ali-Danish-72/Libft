/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:25:05 by mdanish           #+#    #+#             */
/*   Updated: 2023/07/16 14:25:07 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	ft_striteri(char const *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (s)
	{
		i = ft_strlen(s);
		while (i--)
			f(i, (char *)(s + i));
	}
}
