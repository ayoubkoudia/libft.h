/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   000ft_lstiter_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akoudia <akoudia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:28:53 by akoudia           #+#    #+#             */
/*   Updated: 2022/10/20 17:58:31 by akoudia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*curr;

	if (lst == 0)
		return ;
	curr = lst;
	while (curr)
	{
		f(curr->content);
		curr = curr->next;
	}
}
