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

static int	is_empty(const char *s2)
{
	if (s2[0] == '\0')
		return (1);
	return (0);
}

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*result;
	size_t	count_s1;
	size_t	count_s2;

	count_s1 = 0;
	count_s2 = 0;
	result = NULL;
	if (is_empty(s2) == 1)
		return ((char*)s1);
	if (ft_strlen((char*)s1) < ft_strlen((char*)s2))
		return (NULL);
	while (count_s1 < n && result == NULL)
	{
		if (s1[count_s1] == s2[count_s2])
		{
			result = (char *)s1 + count_s1;
			while (s2[count_s2] != '\0' && count_s1 <= n)
			{
				if (s1[count_s1] != s2[count_s2])
				{
					count_s2 = 0;
					result = NULL;
					break ;
				}
				count_s1++;
				count_s2++;
			}
		}
		count_s1++;
	}
	return (result);
}
/*
** int main()
** {
** 	char string[] = "abcdef";
** 	char substring[] = "abcdefghijklmnop";
** 	char *result;
** 	result = ft_strnstr(string, substring, 7);
** }
*/
