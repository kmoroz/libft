/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 11:25:39 by ksmorozo      #+#    #+#                 */
/*   Updated: 2020/11/09 11:25:39 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*buffer1;
	char	buffer2[n];
	char	*buffer3;
	size_t	count;
	size_t	new_count;

	buffer1 = src;
	buffer3 = dest;
	count = 0;
	new_count = 0;
	while (count < n)
	{
		buffer2[count] = buffer1[count];
		count++;
	}
	while (new_count < n)
	{
		buffer3[new_count] = buffer2[new_count];
		new_count++;
	}
	return (buffer3);
}
/*
** int main()
** {
** 	char source[] = "Quiz";
** 	char dest[] = "Geeks";
** 	char source2[] = "Quiz";
** 	char dest2[] = "Geeks";
** 	ft_memmove(dest, source, 5);
** }
*/
