/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoudia <akoudia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:55:31 by akoudia           #+#    #+#             */
/*   Updated: 2022/10/20 20:29:23 by akoudia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str)
	{
		if (*str == (char)c)
			return (str);
		str++;
	}
	if (*str == (char)c)
		return (str);
	return (NULL);
}
// int main()
// {
// 	char * c = "test";
// 	// printf("%s\n",ft_strchr(0x10de8ba40: "teste", 1024: '\0'));
// 	printf("%s\n",     strchr("teste", '\0'));
// 	printf("%s\n",     ft_strchr("teste", '\0'));
// }
