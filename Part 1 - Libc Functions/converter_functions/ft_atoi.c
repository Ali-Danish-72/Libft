/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:19:26 by mdanish           #+#    #+#             */
/*   Updated: 2023/07/04 16:19:27 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

static int	remove_bs(char const *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-' && i++ >= 0)
		sign = -1;
	while (str[i] == 48)
		i++;
	return (i * sign);
}

int	ft_atoi(char const *str)
{
	int			i;
	int			sign;
	long int	nb;

	i = remove_bs(str);
	nb = 0;
	sign = 0;
	if (i < 0 && !sign--)
		i *= -1;
	else
		sign++;
	while (str[i] > 47 && str[i] < 58)
		nb = (nb * 10) + str[i++] - 48;
	return (nb * sign);
}
