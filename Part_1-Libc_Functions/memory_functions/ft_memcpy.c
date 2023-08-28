/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 20:02:20 by mdanish           #+#    #+#             */
/*   Updated: 2023/07/03 20:02:25 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	*ft_memcpy(void *dst, void const *src, size_t n)
{
	size_t	i;

	i = -1;
	if (!dst && !src)
		return (dst);
	while (++i < n)
		*(char *)(dst + i) = *(char *)(src + i);
	return (dst);
}
