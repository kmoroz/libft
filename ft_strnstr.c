/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 13:21:02 by ksmorozo      #+#    #+#                 */
/*   Updated: 2020/11/01 13:21:02 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_empty(const char *s2)
{
	if (s2[0] == '\0')
		return (1);
	return (0);
}

static char		*find_substring(const char *s1, const char *s2, size_t n)
{
	char	*result;
	size_t	count[2];

	count[0] = 0;
	result = NULL;
	while (count[0] < n && result == NULL)
	{
		count[1] = 0;
		if (s1[count[0]] == s2[count[1]])
		{
			result = (char *)s1 + count[0];
			while (s2[count[1]] != '\0')
			{
				if (s1[count[0]] != s2[count[1]] || count[0] == n)
				{
					result = NULL;
					break ;
				}
				count[0]++;
				count[1]++;
			}
		}
		count[0]++;
	}
	return (result);
}

char			*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	if (is_empty(s2) == 1)
		return ((char*)s1);
	if (!s1)
		return (NULL);
	if (ft_strlen((char*)s1) < ft_strlen((char*)s2))
		return (NULL);
	if (ft_strlen((char*)s1) < n)
		return (find_substring(s1, s2, ft_strlen((char*)s1)));
	return (find_substring(s1, s2, n));
}
