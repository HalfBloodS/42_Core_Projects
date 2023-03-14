/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruzicka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:34:27 by jruzicka          #+#    #+#             */
/*   Updated: 2023/02/06 17:34:35 by jruzicka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** ft_lstdelone - deletes a single linked list element
** @lst: a pointer to the linked list element to be deleted
** @del: a pointer to a function that frees the memory of the
data stored in the linked list element

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	// Check if either the linked list element pointer or the function
	pointer is null
	if (!lst || !del)
		return ; // Return immediately if either is null

	// Call the function pointed to by del, passing the content of the
	linked list element as the argument
	del(lst->content);

	// Free the memory of the linked list element
	free(lst);
}*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
