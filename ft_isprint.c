/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:45:54 by zeekinci          #+#    #+#             */
/*   Updated: 2024/11/10 19:44:57 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isprint(int c)
{
    return (c >= 32 && c <= 126);
}

// #include <stdio.h>

// int main(void)
// {
//     char test_chars[] = {'A', ' ', '9', '\n', 'z', '\t', '!', 127};
//     size_t i = 0;

//     printf("Karakterlerin yazdırılabilir olup olmadığını kontrol edelim:\n");

//     while (i < sizeof(test_chars) / sizeof(test_chars[0]))
//     {
//         if (ft_isprint(test_chars[i]))
//             printf("'%c' yazdırılabilir bir karakterdir.\n", test_chars[i]);
//         else
//             printf("'%c' yazdırılabilir bir karakter değildir.\n", test_chars[i]);
//         i++;
//     }

//     return 0;
// }