/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayal-ras <ayal-ras@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:42:44 by ayal-ras          #+#    #+#             */
/*   Updated: 2023/07/31 21:31:42 by ayal-ras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node ->content = content;
	new_node ->next = NULL;
	return (new_node);
}

// int main ()
// {
// 	int	data = 45;
// 	t_list	*node;
// 	node = ft_lstnew(&data);
// 	printf("%d\n",*(int *)node-> content);
// }
// *(int *) --->>> deferencing the (int *)
// The type casting is done by (int *)
// new_node -> content = content 
// member variable 'content' is initialized with value 'content'
// new_node -> next = NULL
// variable 'next' is initizlized to NULL to say it wont point to other node.
//