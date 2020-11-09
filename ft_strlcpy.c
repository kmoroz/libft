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

#include <stdlib.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t count;

	count = 0;
	if (size == 0)
		return (0);
	while (src[count] != '\0')
	{
		if (count < (size - 1))
			dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (count + 1);
}
/*
** int main()
** {
**     char dest[] = "wtf";
**     char src[] = "Jessica";
**     printf("%d", ft_strlcpy(dest, src, 4));
** }
*/
