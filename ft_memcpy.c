/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoudia <akoudia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:30:09 by akoudia           #+#    #+#             */
/*   Updated: 2022/10/04 09:23:59 by akoudia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*a;
	size_t	i;

	a = (char *) dst;
	if (dst != src)
	{
		i = 0;
		while (i < n)
		{
			a[i] = *((char *)src + i);
			i++;
		}
	}
	return (dst);
}
