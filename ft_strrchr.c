/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayal-ras <ayal-ras@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:27:45 by ayal-ras          #+#    #+#             */
/*   Updated: 2023/07/28 17:08:48 by ayal-ras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	length;

	length = 0;
	while (str[length])
	{
		length++;
	}
	i = length;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *) &str[i]);
		i--;
	}
	return (NULL);
}
// {
// 	if (*str == c)
// 	{
// 		return ((char *)str);
// 	}
// 	return (NULL);
// }
//
// #include<stdio.h>
// #include<string.h>
// int main ()
// {
//      char string[] = "hello world";
//     printf ("%s\n", ft_strrchr("teste",'\0'));
//     printf ("%s\n", strrchr("teste",'\0'));
// }
