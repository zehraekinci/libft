/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:45:34 by zeekinci          #+#    #+#             */
/*   Updated: 2024/11/10 19:44:12 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
    unsigned char *ptr = s;

    while (n--)
        *ptr++ = 0;
}

// #include <stdio.h>

// int main()
// {
//     char str[] = "Hello, World!";
//     int  i = 0;

//     while (str[i])
//         i++;

//     ft_bzero(str, 5);

//     while (i--)
//     {
//         printf("%c", str[i]);
//     }
//     printf("\n");
// }