/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 11:29:07 by ksmorozo      #+#    #+#                 */
/*   Updated: 2020/11/09 11:29:07 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
/*
** int main()
** {
** 	ft_memset("", 'A', 0);
** 	memset("", 'A', (0));
** }
*/
