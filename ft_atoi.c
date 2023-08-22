/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayal-ras <ayal-ras@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:54:46 by ayal-ras          #+#    #+#             */
/*   Updated: 2023/08/22 15:06:51 by ayal-ras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char	*str)
{
	long	r;
	int		sign;
	int		i;

	i = 0;
	sign = 1;
	r = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = (r * 10) + str[i++] - '0';
	}
	if (r > 9223372036854775807 && sign == 1)
		return (-1);
	if (r > 9223372036854775807 && sign == -1)
		return (0);
	return ((int)r * sign);
}

// int main()
// {
// 	char str[] = "21474836488999878788888";
// 	printf("%d\n", ft_atoi(str));
// 	printf("%d\n", atoi(str));
// }
// hi, i am reem
// i used if instead of else if for + signs
// ascii to integer