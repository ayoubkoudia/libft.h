/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoudia <akoudia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:28:19 by akoudia           #+#    #+#             */
/*   Updated: 2022/10/20 16:21:56 by akoudia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	neg(long int nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}

int	nblen(int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len = len + 1;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*str;

	sign = 1;
	if (n < 0)
		sign = sign * -1;
	len = nblen(n);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == 0)
		return (NULL);
	str[len] = '\0';
	len--;
	while (len >= 0)
	{
		str[len] = '0' + neg(n % 10);
		n = neg(n / 10);
		len--;
	}
	if (sign < 0)
		str[0] = '-';
	return (str);
}
/*
int main()
{
    char	*i1 = ft_itoa(-623);
	char	*i2 = ft_itoa(156);
	char	*i3 = ft_itoa(-0);
        printf ("%d\n", strcmp(i1,"-623"));
        printf ("%d\n", strcmp(i2,"156"));
        printf ("%d\n", strcmp(i3,"0"));
}
*/
