/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 22:50:18 by zeekinci          #+#    #+#             */
/*   Updated: 2024/11/09 20:04:19 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
    size_t          total_size;
    unsigned char   *ptr;
    size_t          i;

    total_size = count * size;
    ptr = (unsigned char *)malloc(total_size);
    if (!ptr)
        return NULL;

    i = 0;
    while (i < total_size)
    {
        ptr[i] = 0;
        i++;
    }

    return (void *)ptr;
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr;
    size_t n = 2;
    
    arr = (int *)ft_calloc(n, sizeof(int));
    if (!arr)
    {
        printf("Bellek tahsis edilemedi!\n");
        return 1;
    }

    printf("ft_calloc ile ayrılan bellek değerleri:\n");
    size_t i = 0;
    while (i < n)
    {
        printf("arr[%zu] = %d\n", i, arr[i]);
        i++;
    }

    free(arr);

    return 0;
}