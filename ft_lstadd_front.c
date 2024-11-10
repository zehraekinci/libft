/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 20:27:21 by zeekinci          #+#    #+#             */
/*   Updated: 2024/11/10 21:07:35 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL)
		return;
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>

// int main(void)
// {
//     t_list *node1 = ft_lstnew("Second");
//     t_list *node2 = ft_lstnew("First");
//     ft_lstadd_front(&node1, node2);
//     t_list *current = node2;
//     while (current)
//     {
//         printf("Content: %s\n", (char *)current->content);
//         current = current->next;
//     }
//     return (0);
// }