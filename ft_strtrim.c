/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoudia <akoudia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:28:51 by akoudia           #+#    #+#             */
/*   Updated: 2022/10/17 09:33:21 by akoudia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	front;
	size_t	back;
	char	*str;

	str = NULL;
	if (s1 != 0 && set != 0)
	{
		front = 0;
		back = ft_strlen(s1);
		while (s1[front] && ft_strchr(set, s1[front]))
			front++;
		while (s1[back - 1] && ft_strchr(set, s1[back - 1]) && back > front)
			back--;
		str = (char *)malloc(sizeof(char) * (back - front + 1));
		if (!str)
			return (NULL);
		ft_strlcpy(str, &s1[front], back - front + 1);
	}
	return (str);
}
