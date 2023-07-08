/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:11:19 by mdanish           #+#    #+#             */
/*   Updated: 2023/07/03 15:11:29 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}
/*
int main()
{
    char str[] = "Hello4 World!";
    printf("%d\n", ft_isdigit('6'));
    printf("%d\n", ft_isdigit(' '));
    printf("%d\n", ft_isdigit('%'));
    printf("%d\n", ft_isdigit('J'));
    printf("%d\n", ft_isdigit(str[5]));
}
*/
