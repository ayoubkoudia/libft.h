/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoudia <akoudia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:56:01 by akoudia           #+#    #+#             */
/*   Updated: 2022/10/20 19:35:52 by akoudia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = ft_strlen(str);
	while (len >= 0 && str[len] != (unsigned char)c)
		len--;
	if (len == -1)
		return (0);
	return ((char *) &str[len]);
}

// int main()
// {
// 	char s[] = "test123lkfjhjk";
// 	puts(ft_strrchr(s, 't' + 256));
// 	printf("%c" , (unsigned char)('t'+ 256) );
// 	return (0);
// }
