/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 05:18:49 by zeekinci          #+#    #+#             */
/*   Updated: 2024/11/10 19:47:00 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int i;

    if (!s || !f)
        return;

    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}

// #include <unistd.h>

// void inline_function(unsigned int i, char *c)
// {
//     (void)i;
//     *c = *c + 1; // Simply increment each character by 1
// }

// int main(void)
// {
//     char str[] = "Hello, world!";

//     ft_striteri(str, inline_function);
//     write(1, str, sizeof(str) - 1);

//     return 0;
// }
