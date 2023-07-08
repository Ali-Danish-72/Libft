/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:09:41 by mdanish           #+#    #+#             */
/*   Updated: 2023/07/03 15:58:47 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main()
{
	char str[] = "Hello World!";
	printf("%d\n", ft_isalpha(98));
	printf("%d\n", ft_isalpha(-123));
	printf("%d\n", ft_isalpha(12213));
	printf("%d\n", ft_isalpha(23));
	printf("%d\n", ft_isalpha(str[5]));
}
*/