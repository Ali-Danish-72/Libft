/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 15:21:30 by mdanish           #+#    #+#             */
/*   Updated: 2023/07/16 15:21:32 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (fd >= 0)
	{
		if (n == INT32_MIN)
			write(fd, "-2147483648", 11);
		else if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n *= -1;
		}
		if (n > -1 && n < 10)
			ft_putchar_fd((n + 48), fd);
		if (n > 9)
		{
			ft_putnbr_fd((n / 10), fd);
			ft_putnbr_fd((n % 10), fd);
		}
	}
}
