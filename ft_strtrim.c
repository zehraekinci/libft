/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 05:19:09 by zeekinci          #+#    #+#             */
/*   Updated: 2024/11/10 19:45:49 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = 0;
	if (s1 != 0 && set != 0)
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
			j--;
		str = (char *)malloc(sizeof(char) * (j - i + 1));
		if (str)
			ft_strlcpy(str, &s1[i], j - i + 1);
	}
	return (str);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char const	*str = "   Hello, world!   ";
// 	char const	*set = " ";
// 	char		*trimmed;

// 	trimmed = ft_strtrim(str, set);
// 	if (trimmed != NULL)
// 	{
// 		printf("Trimmed string: '%s'\n", trimmed);
// 		free(trimmed);
// 	}
// 	else
// 		printf("Trimming failed\n");
// 	return (0);
// }
