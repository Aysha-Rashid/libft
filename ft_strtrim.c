/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayal-ras <ayal-ras@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 20:47:17 by ayal-ras          #+#    #+#             */
/*   Updated: 2023/08/02 21:58:10 by ayal-ras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// return s1
// s1 = characters specified in set removed from the beg and end of the string
#include "libft.h"

int	trimmed(char c, char const *set)
{
	while (*set)
	{
		if (c == *set) 
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *str, char const *set)
{
	char	*trim;
	int		i;
	int		len;
	int		start;
	int		end;

	i = 0;
	if (str == NULL)
		return (NULL);
	start = 0;
	end = (ft_strlen(str) - 1);
	while (trimmed(str[start], set)) 
		start++;
	while (end > start && trimmed(str[end], set)) 
		end--;
	len = (end - start + 1);
	trim = (char *)malloc((len + 1) * sizeof(char));
	if (trim == NULL)
		return (NULL);
	while (len > i)
		trim[i++] = str[start++];
	trim[i] = '\0';
	return (trim);
}

// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	char *s1 = "  \t \t \n   \n\n\n\t";
// 	char *s2 = "";
// 	char *ret = ft_strtrim(s1, " \n\t");
// 	// char *ret = ft_strtrim(s1, " \n\t");
// 	printf("%d\n", !strcmp(ret, s2));
// }