/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayal-ras <ayal-ras@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:23:14 by ayal-ras          #+#    #+#             */
/*   Updated: 2023/08/06 21:01:32 by ayal-ras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*s1, const char	*s2, size_t	len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (s2[i] != '\0')
		i++;
	if (*s2 == '\0')
		return ((char *)s1);
	if (len == 0) 
		return (NULL);
	while (*s1 != '\0' && *s2 != '\0' && len >= i)
	{
		j = 0;
		while (s1[j] == s2[j] && s2[j] != '\0')
		{
			j++;
		}
		if (s2[j] == '\0')
			return ((char *)s1);
		s1++;
		len--;
	}
	return (NULL);
}

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str1[] = "welcome to our home install";
//     char str2[] = "to our";
//    printf("%s\n", strnstr(str1, str2, 12));
//     printf("%s\n", ft_strnstr(str1, str2, 12)); 
// }
// printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));
// printf("%s\n", strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));