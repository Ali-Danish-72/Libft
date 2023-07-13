/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:20:02 by mdanish           #+#    #+#             */
/*   Updated: 2023/07/11 10:20:04 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
// #include <sys/_types/_null.h>

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		sep_ctr;
	int 	con;
	int		assign_count;
	char	**split;

	i = -1;
	sep_ctr = 1;
	j = 0;
	assign_count = 0;
	while (s[++i])
	{
		if (s[i] == c)
			sep_ctr++;
	}
	split = (char **)malloc(sizeof(char *) * (sep_ctr + 1));
	if (!split)
		return (NULL);
	split[sep_ctr] = NULL;
	con = sep_ctr;
	while (i-- >= 0)
	{
		if (i == -1 || s[i] == c)
		{
			split[--sep_ctr] = (char *)malloc(sizeof(char) * (j + 1));
			if (!split[sep_ctr])
				split[sep_ctr] = NULL;
			split[sep_ctr][j] = '\0';
			while (j--)
			{
				split[sep_ctr][assign_count] = s[i + assign_count + 1];
				assign_count++;
			}
			assign_count = 0;
			j++;
		}
		else
			j++;
	}
	for (int p = -1; p < con; ++p)
		free(split[p]);
	return (split);
}
// #include <stdio.h>
// int main()
// {
// 	int i = -1;
// 	char **str = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
// 	while (++i < 13)
// 		printf("%s$\n", str[i]);
// }

	// split[sep_ctr - 1] = (char *)malloc(sizeof(char) * (j + 1));
	// while (split[a])
	// {
	// 	while (split[a][b])
	// 	{
	// 		if (s[i] == c)
	// 			split[a++][b] = '\0';
	// 		else
	// 			split[a][b++] = s[i++];
	// 	}
	// }