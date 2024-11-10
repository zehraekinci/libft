/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:46:08 by zeekinci          #+#    #+#             */
/*   Updated: 2024/11/10 19:56:00 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
    unsigned char *p;
    size_t i;

    p = (unsigned char *)b;
    i = 0;

    while (i < len)
    {
        p[i] = (unsigned char)c;
        i++;
    }
    return b;
}

// int main(void)
// {
//     char str[20] = "Hello, world!";

//     ft_memset(str, '*', 5);
//     printf("Modified string: %s\n", str);

//     return 0;
// }
