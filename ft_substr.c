/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 13:31:41 by ksmorozo      #+#    #+#                 */
/*   Updated: 2021/07/07 12:20:36 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	count;

	substr = (char *)malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	if ((unsigned int)ft_strlen(s) <= start)
		return (substr);
	count = 0;
	while (s[start] != '\0' && count < len)
	{
		substr[count] = s[start];
		count++;
		start++;
	}
	substr[count] = '\0';
	return (substr);
}
