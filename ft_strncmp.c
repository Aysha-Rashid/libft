/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayal-ras <ayal-ras@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 12:54:42 by ayal-ras          #+#    #+#             */
/*   Updated: 2023/08/05 21:53:32 by ayal-ras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char	*s1, const char	*s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if ((unsigned char)s1[i] != (unsigned char) s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		else if ((unsigned char)s1[i] < (unsigned char)s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}
// #include<string.h>
// #include<stdio.h>
// int main()
// {
// 	char s1[] = "aaao";
// 	char s2[] = "aaag";
// 	printf("%d\n", ft_strncmp(s1, s2, 3));
// 	printf("%d\n", strncmp(s1, s2, 3));
// }
// The exact value of the negative or positive return is not 
// specified by the C standard.