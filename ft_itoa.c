/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoudia <akoudia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:28:19 by akoudia           #+#    #+#             */
/*   Updated: 2022/10/12 11:09:22 by akoudia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nbrlen(int n)
{
	int	cnt;

	cnt = 0;
	if (n <= 0)
		cnt++;
	while (n)
	{
		cnt++;
		n /= 10;
	}
	return (cnt);
}
char	*ft_itoa(int n)
{
	int	i;
	int	size;
	char	*str;
	long int	x ;

	x = (long int )n;
	size = nbrlen(x);
	i = size - 1;
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (0);
	if (x == 0)
		str[0] = x + 48;
	if (x < 0)
	{
		str[0] = '-';
		x = -x;
	}
	while (x)
	{
		str[i] = (x % 10) + 48;
		x = x / 10;
		i--;
	}
	str[size] = '\0';
	return (str);
}
