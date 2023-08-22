/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayal-ras <ayal-ras@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 17:37:05 by ayal-ras          #+#    #+#             */
/*   Updated: 2023/08/05 17:42:56 by ayal-ras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// s: This is a pointer to the object to be searched for.
// c: This is a character to search for.
// n: Max number of the byte which is examined to search c.
//  memchr library function finds the first occurrence of c in the initial
// n characters of the object pointed to by s.
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		if (*p == (unsigned char)c)
		{
			return (p); 
		}
		n--;
		p++;
	}
	return (NULL);
}
// #include<stdio.h>
// #include<string.h>
// int main ()
// {
// 	size_t i = 9;
//  char *string = "hello";
// 	printf ("%s\n", ft_memchr(string, 'l', 9));
// 	printf ("%s\n", memchr(string, 'l', 9));
//  }
// searches a specific character in the entire memory block within given size.