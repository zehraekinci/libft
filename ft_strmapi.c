/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 05:19:01 by zeekinci          #+#    #+#             */
/*   Updated: 2024/11/10 19:50:43 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		i;

	if (s == NULL || f == NULL)
		return (NULL);
	result = (char *)malloc(ft_strlen(s) + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	example_function(unsigned int i, char c)
{
	return (c + i);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char const	*str = "Hello world!";
// 	char		*modified;

// 	modified = ft_strmapi(str, example_function);
// 	if (modified != NULL)
// 	{
// 		printf("Modified string: %s\n", modified);
// 		free(modified);
// 	}
// 	return (0);
// }
