/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/29 14:35:26 by ksmorozo      #+#    #+#                 */
/*   Updated: 2020/10/29 14:35:26 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	size_t	count;
	char	*buffer1;
	char	*buffer2;

	count = 0;
	buffer1 = ptr1;
	buffer2 = ptr2;
	while (count != num)
	{
		if (buffer1[count] != buffer2[count])
			return (buffer1[count] - buffer2[count]);
		count++;
	}
	return (0);
}
/*
** int main()
** {
** 	char s1[] = "atoms\0\0\0\0";
** 	char s2[] = "atoms\0abc";
** 	char s3[] = "atomsaaa";
**
** 	int result = ft_memcmp(s1, s2, 8);
** }
*/
