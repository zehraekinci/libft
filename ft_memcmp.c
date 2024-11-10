/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:45:59 by zeekinci          #+#    #+#             */
/*   Updated: 2024/11/10 19:45:16 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
    const unsigned char *str1;
    const unsigned char *str2;
    size_t i;

    str1 = (const unsigned char *)ptr1;
    str2 = (const unsigned char *)ptr2;
    i = 0;

    while (i < n)
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return 0;
}

// #include <stdio.h>
// #include <stddef.h>

// int main(void)
// {
//     char arr1[] = "Hello, world!";
//     char arr2[] = "Hello, World!";
//     int result;

//     result = ft_memcmp(arr1, arr2, sizeof(arr1));
//     if (result == 0)
//         printf("Arrays are equal\n");
//     else if (result < 0)
//         printf("arr1 is less than arr2\n");
//     else
//         printf("arr1 is greater than arr2\n");

//     return 0;
// }