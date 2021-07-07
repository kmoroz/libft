/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/28 15:56:41 by ksmorozo      #+#    #+#                 */
/*   Updated: 2021/07/07 12:16:30 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*head;

	while (*lst)
	{
		head = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = head;
	}
	*lst = NULL;
}
