/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 18:39:32 by ksmorozo      #+#    #+#                 */
/*   Updated: 2021/07/07 12:18:51 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_size;
	size_t	count;
	size_t	src_size;

	count = 0;
	dest_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (size == 0)
		return (size + src_size);
	while ((src[count] != '\0') && (count + dest_size < size - 1))
	{
		dst[dest_size + count] = src[count];
		count++;
	}
	dst[dest_size + count] = '\0';
	if (dest_size < size)
		return (dest_size + src_size);
	return (size + src_size);
}
