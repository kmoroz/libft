/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/31 20:25:23 by ksmorozo      #+#    #+#                 */
/*   Updated: 2020/10/31 20:25:23 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	count;
	char	*buffer;

	buffer = str;
	count = 0;
	while (count < n)
	{
		if (buffer[count] == c)
			return (buffer + count);
		count++;
	}
	return (NULL);
}
/*
** int main()
** {
** 	char my_thoughts[] = "help";
** 	char *test;
** 	test = ft_memchr(my_thoughts, 'z', 4);
** }
*/
