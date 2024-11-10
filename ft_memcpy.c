/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:46:02 by zeekinci          #+#    #+#             */
/*   Updated: 2024/11/10 19:45:21 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    const unsigned char *s;
    size_t i;

    d = (unsigned char *)dest;
    s = (const unsigned char *)src;
    i = 0;

    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return dest;
}

// #include <stdio.h>
// #include <stddef.h>

// int main(void)
// {
//     char src[] = "Hello, world!";
//     char dest[20];

//     ft_memcpy(dest, src, sizeof(src));
//     printf("Copied string: %s\n", dest);

//     return 0;
// }