/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bshoda <bshoda@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 17:31:31 by bshoda            #+#    #+#             */
/*   Updated: 2026/05/10 19:35:56 by bshoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	current = *lst;
	while (current->next)
		current = current->next;
	current->next = new;
}

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*new1;
// 	t_list	*new2;

// 	head = ft_lstnew("hello");
// 	new1 = ft_lstnew("world");
// 	ft_lstadd_back(&head, new1);
// 	new2 = ft_lstnew("42");
// 	ft_lstadd_back(&head, new2);
// 	printf("%s\n", (char *)head->content);
// 	printf("%s\n", (char *)head->next->content);
// 	printf("%s\n", (char *)head->next->next->content);
// 	return (0);
// }
