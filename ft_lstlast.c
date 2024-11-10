/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 20:51:57 by zeekinci          #+#    #+#             */
/*   Updated: 2024/11/10 20:57:58 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// #include <stdio.h>

// int main(void)
// {
//     t_list *node1 = ft_lstnew("Node 1");
//     t_list *node2 = ft_lstnew("Node 2");
//     t_list *node3 = ft_lstnew("Node 3");

//     ft_lstadd_back(&node1, node2);
//     ft_lstadd_back(&node1, node3);

//     t_list *last = ft_lstlast(node1);
//     if (last)
//     {
//         printf("Last node content: %s\n", (char *)last->content);
//     }

//     t_list *current = node1;
//     t_list *next;
//     while (current)
//     {
//         next = current->next;
//         free(current);
//         current = next;
//     }

//     return (0);
// }
