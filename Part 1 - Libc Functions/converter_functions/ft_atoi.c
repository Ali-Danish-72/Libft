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

int	ft_atoi(char const *str)
{
	int				i;
	int				sign;
	long long int	nb;

	i = 0;
	nb = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			sign = -1;
	}
	while (str[i] > 47 && str[i] < 58 && nb < INT64_MAX)
	{
		nb = (nb * 10) + str[i++] - '0';
		if (nb < 0 && sign == 1)
			return (-1);
		if (nb < 0 && sign == -1)
			return (0);
	}
	return (nb * sign);
}
