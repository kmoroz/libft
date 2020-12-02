/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/31 20:25:23 by ksmorozo      #+#    #+#                 */
/*   Updated: 2020/12/03 00:04:26 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	count;
	char	*buffer;

	buffer = (char*)str;
	count = 0;
	while (count < n)
	{
		if (buffer[count] == c)
			return (buffer + count);
		count++;
	}
	return (NULL);
}
