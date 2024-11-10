/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:46:11 by zeekinci          #+#    #+#             */
/*   Updated: 2024/11/10 19:47:10 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
    while (*str)
    {
        if (*str == (unsigned char)c)
            return (char *)str;
        str++;
    }
    if (c == '\0')
        return (char *)str;
    return NULL;
}

// #include <stddef.h>

// int main(void)
// {
//     const char str[] = "Hello, world!";
//     char ch = 'w';
//     char *result = ft_strchr(str, ch);

//     if (result)
//     {
//         const char *temp = result;
//         int len = 0;
//         while (*temp++)
//             len++;
//         write(1, result, len);
//     }
//     else
//         write(1, "Character not found\n", 20);

//     return 0;
// }
