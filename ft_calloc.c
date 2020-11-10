/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 10:14:30 by ksmorozo      #+#    #+#                 */
/*   Updated: 2020/11/03 10:14:30 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void *pointer;

	if (nitems == 0 || size == 0)
		return (NULL);
	pointer = malloc(nitems * size);
	ft_bzero(pointer, nitems * size);
	return (pointer);
}
