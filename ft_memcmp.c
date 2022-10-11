/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoudia <akoudia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:45:37 by akoudia           #+#    #+#             */
/*   Updated: 2022/10/05 14:45:49 by akoudia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;

	str1 = (unsigned char *) s1;
	i = 0;
	while (i < n && str1[i] == *((unsigned char *)s2 + i))
		i++;
	if (i != n)
		return (str1[i] - *((unsigned char *)s2 + i));
	return (0);
}
