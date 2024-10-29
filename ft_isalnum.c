/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:45:41 by zeekinci          #+#    #+#             */
/*   Updated: 2024/10/29 12:15:09 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

int ft_isalnum(int c)
{
 
    return(ft_isalpha(c) || ft_isalpha(c));
}

int main()
{
    int ft_isalpha(int c);
    int ft_isdigit(int c);
    printf("%d\n", ft_isalnum('a'));
}