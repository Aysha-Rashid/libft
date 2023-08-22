/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayal-ras <ayal-ras@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:07:46 by ayal-ras          #+#    #+#             */
/*   Updated: 2023/08/06 18:34:08 by ayal-ras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char	const	*s, char (*f)(unsigned	int, char))
{
	unsigned int		i;
	unsigned int		len;
	char				*str;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = (f(i, s[i]));
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include<stdio.h>
// int main ()
// {
//     char string[] = "Hello, World!";
//     char *result;
//     result = ft_strmapi(string, uppercase_char);
// 	   printf("%s\n", result);
// }
// char uppercase_char(unsigned int index, char c)
// {
//     if (c >= 'a' && c <= 'z')
//     {
//         return c - ('a' - 'A');
//     }
//     return c;
// }
// Applies the function ’f’ 
// to each character of the string ’s’
// takes a string and a mapping function as input. 
// It applies the mapping function to each character of the input string,
// creating a new string with the mapped characters,
// and returns a pointer to this new string. 