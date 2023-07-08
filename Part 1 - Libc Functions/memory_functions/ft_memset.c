/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:44:37 by mdanish           #+#    #+#             */
/*   Updated: 2023/07/03 16:44:38 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;

	str = (unsigned char *)b;
	while (len--)
		*str++ = c;
	return (b);
}

/*
int main()
{
	char str1[] = "1234567890";
	int	str2[] = {2, 3, 5, 67, 634, 76, 12};
	printf("%s\n", memset(str1, 'c', 4));
	printf("%s\n", ft_memset(str1, 234, 4));
	printf("%s\n", memset(str2, 'c', 5));
	printf("%d\n", str2[2]);
	printf("%s\n", ft_memset(str2, 'c', 5));
	printf("%d\n", str2[2]);
}
*/