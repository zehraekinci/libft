/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:45:51 by zeekinci          #+#    #+#             */
/*   Updated: 2024/11/10 19:44:51 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isdigit(int c)
{
    return(c >= '0' && c <= '9');
}

// #include <stdio.h>

// int main(void)
// {
//     char test_chars[] = {'0', '5', '9', 'A', 'z', '!', '3', ' '};
//     size_t i = 0;

//     printf("Karakterlerin rakam olup olmadığını kontrol edelim:\n");

//     while (i < sizeof(test_chars) / sizeof(test_chars[0]))
//     {
//         if (ft_isdigit(test_chars[i]))
//             printf("'%c' bir rakamdır.\n", test_chars[i]);
//         else
//             printf("'%c' bir rakam değildir.\n", test_chars[i]);
//         i++;
//     }

//     return 0;
// }