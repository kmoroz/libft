/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 10:14:30 by ksmorozo      #+#    #+#                 */
/*   Updated: 2021/07/07 12:03:33 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*pointer;

	pointer = malloc(nitems * size);
	if (pointer == NULL)
		return (NULL);
	ft_bzero(pointer, nitems * size);
	return (pointer);
}
