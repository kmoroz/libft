/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   strlcpy.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/28 16:03:38 by ksmorozo      #+#    #+#                 */
/*   Updated: 2020/10/28 16:03:38 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t count;

	count = 0;
	if (size == 0)
		return (ft_strlen((char*)src));
	while (src[count] != '\0' && count < (size - 1))
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (ft_strlen((char*)src));
}
/*
** int main()
** {
**     char dest[] = "";
**     char src[] = "hello !";
** 	int result;
**     result = ft_strlcpy(dest, src, 18);
** }
*/
