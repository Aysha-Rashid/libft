/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayal-ras <ayal-ras@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:28:29 by ayal-ras          #+#    #+#             */
/*   Updated: 2023/08/02 21:57:55 by ayal-ras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*s3;

	if (s1 == NULL)
		return ((char *)s2);
	if (s2 == NULL)
		return ((char *)s1);
	s3 = (char *) malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s3)
		return (NULL);
	i = 0;
	while (i < (ft_strlen(s1) + ft_strlen(s2)))
	{
		if (i < ft_strlen(s1))
			s3[i] = s1[i];
		else
			s3[i] = s2[i - ft_strlen(s1)];
		i++;
	}
	s3[(ft_strlen(s1) + ft_strlen(s2))] = '\0';
	return (s3);
}

// #include<stdio.h>
// #include<string.h>
// int main ()
// {
// 	char s1[] = "hello";
// 	char s2[] = "bruh";
// 	printf("%s\n", ft_strjoin(s1, s2));
// }