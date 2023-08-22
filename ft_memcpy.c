/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayal-ras <ayal-ras@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 18:48:18 by ayal-ras          #+#    #+#             */
/*   Updated: 2023/08/05 21:28:22 by ayal-ras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t			i;
	char			*dst1;
	const char		*src1;

	dst1 = (char *)dst;
	src1 = (const char *)src;
	if (len == 0 || dst1 == src1)
		return (dst1);
	i = 0;
	while (len > i)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst);
}

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[100] = "Learningisfun";
//     char *first, *second;
//     first = str;
//     second = str;
//     printf("Original string :%s\n ", str);
// //     // when overlap happens then it just ignore it
//    memcpy(first + 8, first, 10);
//    printf("memcpy overlap : %s\n ", str);
//     // when overlap it start from first position
//    ft_memcpy(second + 8, first, 10);
//     printf("ft_memcpy overlap : %s\n ", str);
//     return 0;
// }