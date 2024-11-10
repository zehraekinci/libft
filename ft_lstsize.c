/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 20:50:17 by zeekinci          #+#    #+#             */
/*   Updated: 2024/11/10 20:51:12 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

// #include <stdio.h>

// int main(void)
// {
//     t_list *node1 = ft_lstnew("Node 1");
//     t_list *node2 = ft_lstnew("Node 2");
//     t_list *node3 = ft_lstnew("Node 3");

//     ft_lstadd_back(&node1, node2);
//     ft_lstadd_back(&node1, node3);

//     int size = ft_lstsize(node1);
//     printf("List size: %d\n", size);

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