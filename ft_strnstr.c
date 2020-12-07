/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 13:21:02 by ksmorozo      #+#    #+#                 */
/*   Updated: 2020/12/07 13:34:59 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	count_big_string;
	int		result;

	count_big_string = 0;
	result = ft_strncmp(s1, s2, n);
	if (!*s2)
		return ((char*)s1);
	if (ft_strlen(s1) < ft_strlen(s2) || n == 0)
		return (NULL);
	if (result == 0)
		return ((char*)s1);
	while (result != 0 && count_big_string < n
	&& n - count_big_string >= ft_strlen(s2))
	{
		result = ft_strncmp((char*)s1 + count_big_string, s2, ft_strlen(s2));
		if (result == 0)
			return ((char*)s1 + count_big_string);
		count_big_string++;
	}
	return (NULL);
}
