/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayal-ras <ayal-ras@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:28:42 by ayal-ras          #+#    #+#             */
/*   Updated: 2023/07/20 19:30:55 by ayal-ras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char	*s, int fd)
{
	if (!s)
	{
		return ;
	}
	write (fd, s, ft_strlen(s));
}

// int main()
// {
// 	ft_putstr_fd("hello, how are you?", 1);
// }
