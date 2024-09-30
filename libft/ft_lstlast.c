/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alfrberm <alfrberm@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 15:39:32 by alfrberm          #+#    #+#             */
/*   Updated: 2024/09/29 15:43:34 by alfrberm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	ft_lstlast(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	while(temp)
		temp = temp->next;
	return (temp);
}