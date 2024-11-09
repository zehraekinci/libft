/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeekinci <zeekinci@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 05:17:41 by zeekinci          #+#    #+#             */
/*   Updated: 2024/11/09 20:42:31 by zeekinci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numlen(int n)
{
	int len = 0;

	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	num;

	len = ft_numlen(n);
	num = n;
    
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		str[len--] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int numbers[] = {123, -456, 0, 7890, -2147483648, 42};
    size_t i = 0;
    char *str;

    printf("Sayıların karakter dizisine dönüştürülmesi:\n");

    while (i < sizeof(numbers) / sizeof(numbers[0]))
    {
        str = ft_itoa(numbers[i]);
        if (str)
        {
            printf("%d -> \"%s\"\n", numbers[i], str);
            free(str);
        }
        else
        {
            printf("%d -> Dönüştürme başarısız\n", numbers[i]);
        }
        i++;
    }

    return 0;
}