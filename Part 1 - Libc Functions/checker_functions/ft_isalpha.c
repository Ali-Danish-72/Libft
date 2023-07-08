/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:09:18 by mdanish           #+#    #+#             */
/*   Updated: 2023/07/03 15:09:24 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	return (0);
}
/*
int	main()
{
	char str[] = "Hello World!";
	printf("%d\n", ft_isalpha('|'));
	printf("%d\n", ft_isalpha(' '));
	printf("%d\n", ft_isalpha('v'));
	printf("%d\n", ft_isalpha('J'));
	printf("%d\n", ft_isalpha(str[5]));
}
*/
