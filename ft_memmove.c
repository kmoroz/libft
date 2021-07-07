/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 11:25:39 by ksmorozo      #+#    #+#                 */
/*   Updated: 2021/07/07 12:17:34 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*source;
	unsigned char	*destination;
	int				count;

	if (src == dest)
		return (dest);
	source = (unsigned char *)src;
	destination = (unsigned char *)dest;
	count = n - 1;
	if (source < destination)
	{
		while (count >= 0)
		{
			destination[count] = source[count];
			count--;
		}
	}
	while (count >= 0)
	{
		*destination = *source;
		count--;
		source++;
		destination++;
	}
	return (dest);
}
