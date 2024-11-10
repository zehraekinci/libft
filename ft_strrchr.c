/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:46:33 by zeekinci          #+#    #+#             */
/*   Updated: 2024/11/10 19:45:55 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char const	*str = "Hello, world!";
// 	char		ch = 'o';
// 	char		*result;

// 	result = ft_strrchr(str, ch);
// 	if (result != NULL)
// 		printf("Last occurrence: %s\n", result);
// 	else
// 		printf("Character not found\n");
// 	return (0);
// }