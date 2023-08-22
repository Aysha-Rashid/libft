/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayal-ras <ayal-ras@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 21:33:35 by ayal-ras          #+#    #+#             */
/*   Updated: 2023/08/01 16:22:07 by ayal-ras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!lst)
		return ;
	new -> next = *lst;
	*lst = new;
}

// int main()
// {
// 	int	**data = 45;
// 	int *new = 12;

// 	ft_lstaddfront(&data, &new);
// 	printf("%d\n",**(int *)data -> content);
// }