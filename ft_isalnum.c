/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:45:41 by zeekinci          #+#    #+#             */
/*   Updated: 2024/11/09 20:21:05 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
    return ((c >= 'A' && c <= 'Z') 
            || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'));
}

#include <stdio.h>

int main(void)
{
    char test_chars[] = {'A', 'z', '5', '!', ' ', '9', 'b', '#'};
    size_t i = 0;

    printf("Karakterlerin alfanümerik olup olmadığını kontrol edelim:\n");

    while (i < sizeof(test_chars) / sizeof(test_chars[0]))
    {
        if (ft_isalnum(test_chars[i]))
            printf("'%c' alfanümerik bir karakterdir.\n", test_chars[i]);
        else
            printf("'%c' alfanümerik bir karakter değildir.\n", test_chars[i]);
        i++;
    }

    return 0;
}