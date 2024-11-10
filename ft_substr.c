/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 05:19:14 by zeekinci          #+#    #+#             */
/*   Updated: 2024/11/10 21:00:49 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return ((char *)malloc(sizeof(char)));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// #include <stdio.h>

// int main(void)
// {
//     char *original = "Hello, World!";
//     char *sub;

//     sub = ft_substr(original, 7, 5);  // "World" alt stringi.
//     if (sub)
//     {
//         printf("Substring: %s\n", sub);
//         free(sub);
//     }

//     sub = ft_substr(original, 0, 5);  // "Hello" alt stringi.
//     if (sub)
//     {
//         printf("Substring: %s\n", sub);
//         free(sub);
//     }

//     sub = ft_substr(original, 14, 5);  // Boş string.
//     if (sub)
//     {
//         printf("Substring: %s\n", sub);
//         free(sub);
//     }

//     return (0);
// }
