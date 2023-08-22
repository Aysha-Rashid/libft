/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayal-ras <ayal-ras@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 18:07:48 by ayal-ras          #+#    #+#             */
/*   Updated: 2023/08/11 14:03:30 by ayal-ras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void	*s, size_t n)
{
	ft_memset(s, 0, n);
}

// #include<stdio.h>
// #include<ctype.h>
// #include<string.h>
// int main()
// {
// 	char s[] = "hello";
// 	int i = 0;
// 	while (s[i] < 3)
// 		i++;
// 	printf("%s\n", s);
// 	ft_bzero(s, sizeof(int));
// 	printf("%s\n", s);
// //printf("%s\n", ft_bzero(s, sizeof(int)));
// }
// is intended to set memory to zero .