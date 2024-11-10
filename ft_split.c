/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 05:18:22 by zeekinci          #+#    #+#             */
/*   Updated: 2024/11/10 19:47:29 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **allocate_result_array(char const *s, char c, size_t *count)
{
    size_t i = 0;
    *count = 0;
    while (s[i])
    {
        if (s[i] != c && (i == 0 || s[i - 1] == c))
            (*count)++;
        i++;
    }
    return (char **)malloc((*count + 1) * sizeof(char *));
}

char *allocate_word(char const *s, char c, size_t *i)
{
    size_t k = 0;
    while (s[*i + k] && s[*i + k] != c)
        k++;
    char *word = (char *)malloc((k + 1) * sizeof(char));
    if (!word)
        return NULL;
    k = 0;
    while (s[*i] && s[*i] != c)
        word[k++] = s[(*i)++];
    word[k] = '\0';
    return word;
}

char **ft_split(char const *s, char c)
{
    size_t count = 0, i = 0, j = 0;
    if (!s)
        return NULL;
    char **result = allocate_result_array(s, c, &count);
    if (!result)
        return NULL;
    while (s[i])
    {
        if (s[i] != c)
        {
            result[j] = allocate_word(s, c, &i);
            if (!result[j])
            {
                for (size_t k = 0; k < j; k++)
                    free(result[k]);
                free(result);
                return NULL;
            }
            j++;
        }
        else
            i++;
    }
    result[j] = NULL;
    return result;
}

void print_result(char **result)
{
    for (size_t i = 0; result && result[i]; i++)
    {
        write(1, result[i], sizeof(result[i]));
        write(1, "\n", 1);
    }
}

void free_result(char **result)
{
    for (size_t i = 0; result && result[i]; i++)
        free(result[i]);
    free(result);
}

// #include <stdlib.h>
// #include <unistd.h>

// int main(void)
// {
//     char str[] = "Hello world this is a test \n";
//     char **result = ft_split(str, ' ');
//     if (result)
//     {
//         print_result(result);
//         free_result(result);
//     }
//     return 0;
// }
