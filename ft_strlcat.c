/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayal-ras <ayal-ras@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 13:27:13 by ayal-ras          #+#    #+#             */
/*   Updated: 2023/08/06 15:55:42 by ayal-ras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	d_len;
	unsigned int	j;
	unsigned int	len;
	unsigned int	s_len;

	j = 0;
	if (dstsize == '\0')
		return (ft_strlen(src));
	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	len = dstsize - 1;
	if (dstsize > d_len)
	{
		while (src[j] != '\0' && j < (len - d_len))
		{
			dst[d_len + j] = src[j];
			j++;
		}
		dst[d_len + j] = '\0';
		return (s_len + d_len);
	}
	else
		return (s_len + dstsize);
}
// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	char src[20] = "killl";
// 	char dest[20] = "hel";
// 	// memset(dest, 'r', 15);
// 	printf("%lu\n",strlcat(dest, "lorem ipsum dolor sit amet", 5));
// 	printf("%lu\n",ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));
// //	printf("%lu\n", ft_strlcat(dest, src, 5));
// 	printf("%s\n", dest);
// //	printf("%s\n",strcpy(dest, src, 2));
// //	printf("%s\n", strncpy(dest, src));
// } 
// returns the intial length of dst plus the length of src.
// The condition j < (len - d_len) ensures that the loop only copies characters 
// if there is space available in the destination buff