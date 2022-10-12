/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoudia <akoudia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:24:18 by akoudia           #+#    #+#             */
/*   Updated: 2022/10/12 11:47:21 by akoudia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	slen;

	slen = len;
	if (!s)
		return (NULL);
	else if (slen > ft_strlen(s))
	{
		sub = (char *)malloc((unsigned int) ft_strlen(s) + 1);
		slen = ft_strlen(s) - start;
	}
	else
		sub = (char *)malloc(slen + 1);
	if (!sub)
		return (NULL);
	else if (start >= ft_strlen(s))
	{
		sub[0] = '\0';
		return (sub);
	}
	ft_memcpy(sub, s + start, slen);
	sub[slen] = '\0';
	return (sub);
}
