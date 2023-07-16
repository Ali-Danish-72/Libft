/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdanish <mdanish@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 18:03:02 by mdanish           #+#    #+#             */
/*   Updated: 2023/07/16 18:03:04 by mdanish          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	} 
}

// int main()
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*current;
// 	node1 = ft_lstnew("Hello ");
// 	node2 = ft_lstnew("world");
// 	node3 = ft_lstnew("!!!");
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = NULL;
// 	current = node1;
// 	while (current)
// 	{
// 		printf("%s", current->content);
// 		current = current->next;
// 	}
// }
