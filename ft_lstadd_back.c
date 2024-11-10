/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 20:47:54 by zeekinci          #+#    #+#             */
/*   Updated: 2024/11/10 20:48:36 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}

// #include <stdio.h>

// int main(void)
// {
//     t_list *node1 = ft_lstnew("First");
//     t_list *node2 = ft_lstnew("Second");
//     t_list *node3 = ft_lstnew("Third");

//     ft_lstadd_back(&node1, node2);
//     ft_lstadd_back(&node1, node3);

//     t_list *current = node1;
//     while (current)
//     {
//         printf("Content: %s\n", (char *)current->content);
//         current = current->next;
//     }
//     return (0);
// }