/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/31 19:27:11 by ksmorozo      #+#    #+#                 */
/*   Updated: 2021/07/07 12:17:08 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*buffer1;
	unsigned char	*buffer2;
	size_t			count;

	buffer1 = (unsigned char *)src;
	buffer2 = (unsigned char *)dest;
	count = 0;
	while (count < n)
	{
		if (buffer1[count] == (unsigned char)c)
		{
			buffer2[count] = buffer1[count];
			return (buffer2 + count + 1);
		}
		buffer2[count] = buffer1[count];
		count++;
	}
	return (NULL);
}
