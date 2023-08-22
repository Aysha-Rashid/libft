/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayal-ras <ayal-ras@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 13:25:01 by ayal-ras          #+#    #+#             */
/*   Updated: 2023/08/15 16:30:51 by ayal-ras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char	const	*s, unsigned int start, size_t	len)
{
	char	*sub;
	size_t	i;
	char	*src;
	size_t	reslen;

	i = 0;
	if (!s)
		return (NULL);
	src = (char *)s + start;
	if ((size_t)start >= ft_strlen(s)) 
		return (ft_strdup(""));
	if (len > ft_strlen(src))
		reslen = ft_strlen(src) + 1;
	else
		reslen = len + 1;
	sub = malloc (reslen * sizeof(char));
	if (!sub)
		return (NULL);
	while (s[start + i] != '\0' && i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

// sub is the string;
// s_start is the substring;
// s_start = sub + start;
// #include<string.h>
// #include<stdio.h>
// int main()
// {
// 	char *s = "all of this !";
// 	size_t size = strlen(s);
// 	char *ret = ft_substr(s, 0, 0);
// 	printf("%s\n", ret);
// 	// char *ret1 = substr(s, 0, size);
// 	// printf("%s\n", ret1);
// }

// if i dont add this
// if (!s)
// 		return (NULL);
// my code doesnt get protected
