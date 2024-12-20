/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:46:24 by zeekinci          #+#    #+#             */
/*   Updated: 2024/11/10 19:46:17 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char const	*str = "Hello world!";
// 	int			len;

// 	len = ft_strlen(str);
// 	printf("Length: %d\n", len);
// 	return (0);
// }
