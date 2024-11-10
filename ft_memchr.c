/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:45:56 by zeekinci          #+#    #+#             */
/*   Updated: 2024/11/10 19:45:11 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
    const unsigned char *str;
    unsigned char target;
    size_t i;

    str = (const unsigned char *)ptr;
    target = (unsigned char)c;
    i = 0;

    while (i < n)
    {
        if (str[i] == target)
            return (void *)(str + i);
        i++;
    }
    return NULL;
}

// #include <stdio.h>
// #include <stddef.h>

// int main(void)
// {
//     char arr[] = "Hello, world!";
//     char *result;

//     result = (char *)ft_memchr(arr, '\0', sizeof(arr));
//     if (result != NULL)
//         printf("Character found: %c\n", *result);
//     else
//         printf("Character not found\n");

//     return 0;
// }