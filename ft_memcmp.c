/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayal-ras <ayal-ras@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:05:43 by ayal-ras          #+#    #+#             */
/*   Updated: 2023/07/13 15:39:11 by ayal-ras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void	*s1, const void	*s2, size_t n)
{
	unsigned int		i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while ((n > i))
	{
		if ((const unsigned char)str1[i] > (const unsigned char) str2[i])
		{
			return (str1[i] - str2[i]);
		}
		else if ((const unsigned char)str1[i] < (const unsigned char)str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}
// #include<string.h>
// #include<stdio.h>
// int main()
// {
// 	char *s1 = "\xff\0\0\xaa\0\xde\xffMACOSX\xff";
// 	char *s2 = "\xff\0\0\xaa\0\xde\x00MBS";
// 	size_t size = 9;
// 	int i1 = memcmp(s1, s2, size);
// 	int i2 = ft_memcmp(s1, s2, size);

// 	printf("%d\n%d\n", i1, i2);
// }
// Mistakes
// included str2[i]||str2[i] in the while loop so
// the string wouldnt read beyond '\0'.