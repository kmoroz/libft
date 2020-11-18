/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 11:23:09 by ksmorozo      #+#    #+#                 */
/*   Updated: 2020/11/09 11:23:09 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*buffer1;
	char	*buffer2;
	size_t	count;

	buffer1 = (char*)src;
	buffer2 = dest;
	count = 0;
	if (src == NULL && dest == NULL)
		return (NULL);
	while (count < n)
	{
		buffer2[count] = buffer1[count];
		count++;
	}
	return (dest);
}
/*
** int main()
** {
** 	char source[] = '"Quiz"';
** 	char dest[] = "Geeks";
** 	char source2[] = "Quiz";
** 	char dest2[] = "Geeks";
** 	ft_memcpy(dest, source, 5);
** 	memcpy(dest2, source2, 5);
** }
*/
