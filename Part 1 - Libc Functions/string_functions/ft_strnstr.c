/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:56:24 by mdanish           #+#    #+#             */
/*   Updated: 2023/07/04 17:56:26 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_strnstr(char const *haystack, char const *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = -1;
	j = 0;
	if (!*needle)
		return ((char *)haystack);
	if (!haystack && !len)
		return (NULL);
	while (haystack[++i])
	{
		while (i < len && haystack[i + j] == needle[j])
		{
			if (!haystack[i + j])
				break;
			j++;
		}
		if (!needle[j] && (i + j) <= len)
			return ((char *)(haystack + i));
		j = 0;
	}
	return (0);
}
// #include <stdio.h>
// int main()
// {
// 	char	haystack[] = "aaabcabcd";
// 	if (ft_strnstr(haystack, "cd", 8) == NULL)
// 		printf("1\n");
// 	printf("%s\n", ft_strnstr(haystack, "cd", 8));
// }