/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:12:41 by mdanish           #+#    #+#             */
/*   Updated: 2023/07/03 15:56:47 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}

// int main()
// {
// 	char str[] = "Hello World!";
// 	printf("%d\n", ft_isprint(98));
// 	printf("%d\n", isprint(98));
// 	printf("%d\n", ft_isprint(-123));
// 	printf("%d\n", isprint(-123));
// 	printf("%d\n", ft_isprint(12213));
// 	printf("%d\n", isprint(12213));
// 	printf("%d\n", ft_isprint(23));
// 	printf("%d\n", isprint(23));
// 	printf("%d\n", ft_isprint(str[5]));
// 	printf("%d\n", isprint(str[5]));
// }