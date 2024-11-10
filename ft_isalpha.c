/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:45:45 by zeekinci          #+#    #+#             */
/*   Updated: 2024/11/10 19:44:32 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalpha(int c)
{
    return((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

// #include <stdio.h>

// int main(void)
// {
//     char test_chars[] = {'A', 'z', '5', '!', ' ', 'M', 'b', '#'};
//     size_t i = 0;

//     printf("Karakterlerin alfabetik olup olmadığını kontrol edelim:\n");

//     while (i < sizeof(test_chars) / sizeof(test_chars[0]))
//     {
//         if (ft_isalpha(test_chars[i]))
//             printf("'%c' alfabetik bir karakterdir.\n", test_chars[i]);
//         else
//             printf("'%c' alfabetik bir karakter değildir.\n", test_chars[i]);
//         i++;
//     }

//     return 0;
// }