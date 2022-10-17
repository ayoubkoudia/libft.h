/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoudia <akoudia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:27:53 by akoudia           #+#    #+#             */
/*   Updated: 2022/10/15 15:26:19 by akoudia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	s;
	size_t	dst_len;
	size_t	odst_len;

	s = dstsize;
	if (s == 0)
		return (ft_strlen(src));
	dst_len = ft_strlen(dst);
	odst_len = ft_strlen(dst);
	if (s < dst_len)
		return (s + ft_strlen(src));
	i = 0;
	while (s > 0 && dst_len < dstsize - 1 && src[i] != '\0')
	{
		dst[dst_len] = src[i];
		dst_len++;
		i++;
	}
	dst[dst_len] = '\0';
	return (odst_len + ft_strlen(src));
}
