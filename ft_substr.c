/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoudia <akoudia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:24:18 by akoudia           #+#    #+#             */
/*   Updated: 2022/10/20 19:58:58 by akoudia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	s_len;

	s_len = len;
	if (!s)
		return (NULL);
	if (s_len > ft_strlen(s))
	{
		substring = (char *)malloc((unsigned int) ft_strlen(s) + 1);
		s_len = ft_strlen(s) - start;
	}
	else
		substring = (char *)malloc(s_len + 1);
	if (!substring)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		substring[0] = '\0';
		return (substring);
	}
	ft_memcpy(substring, s + start, s_len);
	substring[s_len] = '\0';
	return (substring);
}
