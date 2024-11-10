/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:46:38 by zeekinci          #+#    #+#             */
/*   Updated: 2024/11/10 21:04:59 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// #include <stdio.h>

// int	ft_toupper(int c);

// int main(void)
// {
//     char lower = 'h';
//     char upper = ft_toupper(lower);
//     printf("Original: %c, Uppercase: %c\n", lower, upper);

//     char non_alpha = '5';
//     char result = ft_toupper(non_alpha);
//     printf("Original: %c, Result: %c\n", non_alpha, result);

//     char already_upper = 'H';
//     char still_upper = ft_toupper(already_upper);
//     printf("Original: %c, Result: %c\n", already_upper, still_upper);

//     return (0);
// }
