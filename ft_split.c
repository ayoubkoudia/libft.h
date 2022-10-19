/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoudia <akoudia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:28:39 by akoudia           #+#    #+#             */
/*   Updated: 2022/10/19 14:51:21 by akoudia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_countdest(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (s[i] == 0)
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] != c && s[i] != '\0')
			i++;
		if (s[i] != '\0' && s[i] == c)
		{
			while (s[i] == c)
				i++;
			j++;
		}
	}
	if (s[0] != c && s[0] != '\0')
		j++;
	if (s[i - 1] == c)
		j--;
	return (j);
}

static char	*ft_filldest(char const *s, int i, int j)
{
	char	*dest;
	int		n;

	n = 0;
	dest = malloc(sizeof(char) * (i + 1));
	if (dest == 0)
		return (0);
	j = j - i;
	while (i > 0)
	{
		dest[n++] = s[j++];
		i--;
	}
	dest[n] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		j;
	int		i;
	int		n;

	i = 0;
	j = 0;
	dest = malloc(sizeof(char *) * (ft_countdest(s, c) + 1));
	if (dest == 0 || s == 0)
		return (0);
	while (s[i] != '\0')
	{
		n = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (i != 0)
		{
			dest[j] = ft_filldest(s, i - n, i);
			j++;
		}
		while (s[i] == c && s[i] != '\0')
			i++;
	}
	dest[j] = 0;
	return (dest);
}	
