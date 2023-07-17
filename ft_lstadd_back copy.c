/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 07:12:24 by mdanish           #+#    #+#             */
/*   Updated: 2023/07/17 07:12:25 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new_node)
{
	t_list	*last;

	if (lst && new_node)
	{
		if (!*lst)
			*lst = new_node;
		else
		{
			last = ft_lstlast(*lst);
			last->next = new_node;
			new_node->next = NULL;
		}
	}
}
