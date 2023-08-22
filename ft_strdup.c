/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayal-ras <ayal-ras@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:46:36 by ayal-ras          #+#    #+#             */
/*   Updated: 2023/08/06 14:32:42 by ayal-ras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*s1)
{
	int		len;
	int		i;
	char	*ptr;

	len = ft_strlen(s1);
	i = 0;
	ptr = (char *) malloc(sizeof(*ptr) * (len + 1));
	if (!ptr)
	{
		return (NULL);
	}
	if (ptr >= 0)
	{
		while (*s1)
		{
			ptr[i++] = *s1++;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}

// #include<stdio.h>
// int main()
// {
// 	char str1[] = "hello";
// 	char str2[] = "helo";
// 	char *str3;
// 	str3 = ft_strdup(str2);
// 	printf("%s\n", str3);
// }