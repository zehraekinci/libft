/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:46:13 by zeekinci          #+#    #+#             */
/*   Updated: 2024/11/10 19:47:05 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
    int len;
    char *dup;
    int i;

    len = 0;
    while (s[len])
        len++;

    dup = (char *)malloc((len + 1) * sizeof(char));
    if (!dup)
        return NULL;

    i = 0;
    while (i <= len)
    {
        dup[i] = s[i];
        i++;
    }
    return dup;
}

// #include <stdlib.h>
// #include <unistd.h>

// int main(void)
// {
//     const char str[] = "Hello, world!";
//     char *dup_str;
//     int len;

//     len = 0;
//     while (str[len])
//         len++;

//     dup_str = ft_strdup(str);
//     if (dup_str)
//     {
//         write(1, dup_str, len);
//         free(dup_str);
//     }
//     else
//     {
//         write(1, "Memory allocation failed\n", 25);
//     }

//     return 0;
// }