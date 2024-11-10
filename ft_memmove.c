/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:46:05 by zeekinci          #+#    #+#             */
/*   Updated: 2024/11/10 19:45:25 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
    unsigned char *d;
    const unsigned char *s;
    size_t i;

    d = (unsigned char *)dest;
    s = (const unsigned char *)src;

    if (d == s || len == 0)
        return dest;

    if (d < s)
    {
        i = 0;
        while (i < len)
        {
            d[i] = s[i];
            i++;
        }
    }
    else
    {
        i = len;
        while (i > 0)
        {
            i--;
            d[i] = s[i];
        }
    }
    return dest;
}

// #include <stdio.h>
// #include <stddef.h>

// int main(void)
// {
//     char src[] = "Hello, world!";
//     char dest[20];

//     ft_memmove(dest, src, sizeof(src));
//     printf("Moved string: %s\n", dest);

//     return 0;
// }
