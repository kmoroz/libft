/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/31 19:27:11 by ksmorozo      #+#    #+#                 */
/*   Updated: 2020/10/31 19:27:11 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*buffer1;
	char	*buffer2;
	size_t	count;

	buffer1 = src;
	buffer2 = dest;
	count = 0;
	while (n != 0)
	{
		if (buffer1[count] == c)
		{
			buffer2[count] = buffer1[count];
			return (buffer2 + count + 1);
		}
		buffer2[count] = buffer1[count];
		count++;
		n--;
	}
	return (NULL);
}
/*
** int main()
** {
** 	char source[] = "Quiz";
** 	char dest[] = "Geeks";
** 	char source2[] = "Quiz";
** 	char dest2[] = "Geeks";
** 	printf("%d", ft_memccpy(dest, source, 'i', 5));
** 	printf("%d", memccpy(dest2, source2, 'i', 5));
** }
*/
