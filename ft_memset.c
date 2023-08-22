/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayal-ras <ayal-ras@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 12:31:56 by ayal-ras          #+#    #+#             */
/*   Updated: 2023/08/06 15:01:32 by ayal-ras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*b, int c, size_t	len)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)b;
	while (len > i)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}

// #include<stdio.h>
// #include<string.h>
// #include<ctype.h>
// int main()
// {
//     char ptr[14] = "poppppppkjh";
//    printf("%s\n", ft_memset(ptr, 'a', 5));
//    printf("%s\n", memset(ptr, 'a', 5));
// }
// replaces the first len bytes into the value of c character in ptr.