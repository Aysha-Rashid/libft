/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayal-ras <ayal-ras@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 21:10:57 by ayal-ras          #+#    #+#             */
/*   Updated: 2023/08/05 17:06:31 by ayal-ras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list	*lst)
{
	int	count;

	count = 0;
	while (lst != NULL)
	{
		lst = lst -> next;
		count++;
	}
	return (count);
}

// everytime the node moves to the next node
// count increases.
// int main ()
// {
// 	t_list *node = ft_lstnew("hello");
// 	t_list *node1 = ft_lstnew("hi");
// 	t_list *node2 = ft_lstnew("hekkk");

// 	node -> next = node1;
// 	node1 -> next = node2;
// 	node2 -> next = NULL;	
// 	printf("%d\n", ft_lstsize(node));
// }