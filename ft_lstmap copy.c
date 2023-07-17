/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 07:33:10 by mdanish           #+#    #+#             */
/*   Updated: 2023/07/17 07:33:11 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*store;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		store = ft_lstnew(f(lst->content));
		if (!store)
			ft_lstclear(&new_list, (*del));
		ft_lstadd_back(&new_list, store);
		store = store->next;
		lst = lst->next;
	}
	return (new_list);
}
