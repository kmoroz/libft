/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 18:14:12 by ksmorozo      #+#    #+#                 */
/*   Updated: 2021/07/07 12:19:15 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const void *ptr1, const void *ptr2, size_t num)
{
	size_t			count;
	unsigned char	*buffer1;
	unsigned char	*buffer2;

	count = 0;
	buffer1 = (unsigned char *)ptr1;
	buffer2 = (unsigned char *)ptr2;
	while (count != num && (buffer1[count] != '\0' || buffer2[count] != '\0'))
	{
		if (buffer1[count] != buffer2[count])
			return (buffer1[count] - buffer2[count]);
		count++;
	}
	return (0);
}
