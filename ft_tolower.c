/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:46:35 by zeekinci          #+#    #+#             */
/*   Updated: 2024/11/10 21:02:52 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

// #include <stdio.h>

// int main(void)
// {
//     char upper = 'H';
//     char lower = ft_tolower(upper);
//     printf("Original: %c, Lowercase: %c\n", upper, lower);

//     char non_alpha = '5';
//     char result = ft_tolower(non_alpha);
//     printf("Original: %c, Result: %c\n", non_alpha, result);

//     char already_lower = 'h';
//     char still_lower = ft_tolower(already_lower);
//     printf("Original: %c, Result: %c\n", already_lower, still_lower);

//     return (0);
// }
