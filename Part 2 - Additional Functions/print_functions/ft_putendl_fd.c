/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:55:49 by mdanish           #+#    #+#             */
/*   Updated: 2023/07/16 14:55:51 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	if (s)
	{
		i = -1;
		while (s[++i])
			ft_putchar_fd(s[i], fd);
		ft_putchar_fd('\n', fd);
	}
}
