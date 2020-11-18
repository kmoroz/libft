/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 12:20:11 by ksmorozo      #+#    #+#                 */
/*   Updated: 2020/11/03 12:20:11 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char *dest;

	dest = (char*)malloc(ft_strlen((char*)src) + 1);
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, src, ft_strlen((char*)src) + 1);
	return (dest);
}
/*
** int main()
** {
** 	char source[] = "souce";
** 	printf("%s", source);
** }
*/
