/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrberm <alfrberm@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:00:45 by alfrberm          #+#    #+#             */
/*   Updated: 2024/09/29 19:03:06 by alfrberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void(*del)(void *))
{
	t_list	*temp;
	
	while (*lst)
	{
		temp = (*lst)->next;	
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}
