/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayal-ras <ayal-ras@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:09:12 by ayal-ras          #+#    #+#             */
/*   Updated: 2023/07/29 18:12:08 by ayal-ras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char )c)
	{
		if (*s == '\0')
		{
			return (NULL);
		}
		s++;
	}
	return ((char *)s);
}

// /*
// #include<stdio.h>
// #include<string.h>
// int main ()
// {
//  	char string[] = "hello";
// 	printf ("%s\n", ft_strchr(string, '\0'));
// 	printf ("%s\n", strchr(string, '\0'));
// } */
//     if (isEmpty) {
//         char *empty_str = (char *)malloc(1 * sizeof(char));
//         if (empty_str == NULL) {
//             return NULL; // Memory allocation failed
//         }
//         empty_str[0] = '\0';
//         return empty_str;
//     }