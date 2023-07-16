/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 12:21:42 by mdanish           #+#    #+#             */
/*   Updated: 2023/07/16 12:21:47 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

static int	digit_counter(int n)
{
	int	counter;

	if (n == 0)
		return (1);
	counter = 0;
	if (n < 0)
		counter++;
	while (n)
	{
		counter++;
		n /= 10;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	int		ctr;
	int		digit;
	int		num;
	char	*str;

	ctr = digit_counter(n);
	str = (char *)malloc(sizeof(char) * (ctr + 1));
	if (!str)
		return (NULL);
	str[ctr] = '\0';
	num = n;
	while (ctr--)
	{
		digit = num % 10;
		num /= 10;
		if (digit < 0)
			digit *= -1;
		str[ctr] = digit + '0';
		if (n < 0)
			str[0] = '-';
	}
	return (str);
}
// #include <stdio.h>
// int main()
// {
// 	int	test = INT32_MIN;

// 	printf("%s\n", ft_itoa(test));
// }