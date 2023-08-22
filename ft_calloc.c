/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayal-ras <ayal-ras@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:30:22 by ayal-ras          #+#    #+#             */
/*   Updated: 2023/08/06 15:44:09 by ayal-ras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t	count, size_t	size)
{
	char	*ptr;

	if (size != 0 && count > UINT32_MAX / size)
		return (NULL);
	ptr = malloc (count * size);
	if (ptr == 0)
	{
		return (ptr);
	}
	ft_bzero (ptr, count * size);
	return (ptr);
}

// #include<string.h>
// int main()
// {
//     size_t count = 2147483647;
//     size_t size = sizeof(int);
//     int *ptr = ft_calloc(count, size);
// 		printf("%d\n",*ptr);
// }
// if (size != 0 && count > UINT32_MAX / size)
// integer overflow when calculating the total memory size.
// too large to be safely stored in a 32-bit unsigned integer.