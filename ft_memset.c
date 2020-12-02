/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 11:29:07 by ksmorozo      #+#    #+#                 */
/*   Updated: 2020/12/03 00:06:10 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	count;
	char	*buffer;

	count = 0;
	buffer = str;
	while (count < n)
	{
		buffer[count] = c;
		count++;
	}
	return (buffer);
}
