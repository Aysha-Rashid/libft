/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayal-ras <ayal-ras@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:58:37 by ayal-ras          #+#    #+#             */
/*   Updated: 2023/08/15 16:35:20 by ayal-ras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = dstsize - 1;
	i = 0;
	if (dstsize != '\0')
	{
		while (src[i] != '\0' && i < (len))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	char src[20] = "killlwertyuiop[oeiuyurewiorhjdfgfkvcn]";
// 	char dest[20];
// 	printf("%lu\n", strlcpy(dest, src, 4));
// 	printf("%lu\n", ft_strlcpy(dest, src, -1));
// 	printf("%s\n", dest);
// //	printf("%s\n",strcpy(dest, src, 2));
// //	printf("%s\n", strncpy(dest, src));
// }
//   returns the total length of the string that would have been copied,
// if there was unlimited space. 
// Copies up to dstsize - 1 characters from the string src to dst,
//   NUL-terminating the result if dstsize is not 0.
//   The main difference between strncpy and strlcpy is in the return value:
//  returns the number of characters copied.
// Another difference is that strlcpy always stores one nul in the destination.
