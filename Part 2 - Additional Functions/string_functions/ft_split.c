/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:53:35 by mdanish           #+#    #+#             */
/*   Updated: 2023/07/13 18:53:37 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include <sys/_types/_null.h>

char	**ft_split(char const *s, char c)
{
	int		spl_len;
	int		spl_ctr;
	int		store;
	int		index;
	char	**split;

	spl_len = 0;
	spl_ctr = 1;
	index = -1;
	while (s[++index])
	{
		if (index && s[index] == c && s[index - 1] != c)
			spl_ctr++;
	}
	split = (char **)malloc(sizeof(char *) * (spl_ctr));
	if (!split)
		return (NULL);
	store = spl_ctr;
	while (index-- >= 0)
	{
		if ((s[index] == c && s[index + 1] != c) || index == -1)
		{
			split[--spl_ctr] = ft_substr(s, index + 1, spl_len);
			spl_len = 0;
		}
		else if (s[index] != c) spl_len++;
	}
	// if (!index) index = -1;
	// for (int i = -1; i < store; ++i){
	// 	free(split[i]);
	// }
	// split[store] = (void *)0;
	return (split);
}

// #include <stdio.h>
// int main()
// {
// 	int i = -1;
// 	char **str = ft_split(" r        lorem      ipsum        dolor     sit amet , consectetur adipiscing elit. Sed non        risus. Suspendisse", ' ');
// 	while (++i < 15)
// 		printf("%s$\n", str[i]);
// }
