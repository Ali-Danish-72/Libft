/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:09:29 by mdanish           #+#    #+#             */
/*   Updated: 2023/07/03 15:09:34 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) == 1 || ft_isalpha(c) == 1)
		return (1);
	return (0);
}
/*
int	main()
{
	char str[] = "Hello5 World!";
	printf("%d\n", ft_isalnum('|'));
	printf("%d\n", isalnum('|'));
	printf("%d\n", ft_isalnum(' '));
	printf("%d\n", isalnum(' '));
	printf("%d\n", ft_isalnum('v'));
	printf("%d\n", isalnum('v'));
	printf("%d\n", ft_isalnum('J'));
	printf("%d\n", isalnum('J'));
	printf("%d\n", ft_isalnum(str[5]));
	printf("%d\n", isalnum(str[5]));
}
*/