/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 18:39:32 by ksmorozo      #+#    #+#                 */
/*   Updated: 2020/11/01 18:39:32 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int dest_size;
	int count;

	count = 0;
	dest_size = ft_strlen(dst);
	while (src[count] != '\0' && count + dest_size < size - 1)
	{
		dst[dest_size + count] = src[count];
		count++;
	}
	if (size != 0 || dest_size < size)
		dst[dest_size + count] = '\0';
	return (dest_size + ft_strlen(src));
}
/*
** int main()
** {
** 	char first[] = "cheese";
** 	char second[] = "town";
**
** 	size_t result;
** 	result = ft_strlcat(first, second, 10);
** }
*/
