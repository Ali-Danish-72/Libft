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

static int	count(int sign)
{
	if (sign > 0)
		return (-1);
	return (0);
}

int	ft_atoi(char const *str)
{
	int				i;
	int				sign;
	int				ctr;
	long long int	nb;

	i = 0;
	nb = 0;
	sign = 1;
	ctr = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-' && i++)
		sign = -1;
	while (str[i] == 48)
		i++;
	while (str[i] > 47 && str[i] < 58)
	{
		nb = (nb * 10) + str[i++] - '0';
		ctr++;
	}
	if (ctr >= 19)
		return (count(sign));
	return (nb * sign);
}
