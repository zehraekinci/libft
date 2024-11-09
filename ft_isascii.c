/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:45:48 by zeekinci          #+#    #+#             */
/*   Updated: 2024/11/09 20:24:54 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int c)
{
    return (c >= 0 && c <= 127);
}

#include <stdio.h>

int main(void)
{
    int test_chars[] = {65, 128, 48, -1, 127, 200, 0, 32};
    size_t i = 0;

    printf("Karakterlerin ASCII olup olmadığını kontrol edelim:\n");

    while (i < sizeof(test_chars) / sizeof(test_chars[0]))
    {
        if (ft_isascii(test_chars[i]))
            printf("%d ASCII karakter setine aittir.\n", test_chars[i]);
        else
            printf("%d ASCII karakter setine ait değildir.\n", test_chars[i]);
        i++;
    }

    return 0;
}