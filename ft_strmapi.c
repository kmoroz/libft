/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 20:45:18 by ksmorozo      #+#    #+#                 */
/*   Updated: 2020/12/02 23:23:01 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_s;
	unsigned int	count;

	count = 0;
	new_s = (char*)malloc(ft_strlen(s) + 1);
	if (new_s == NULL)
		return (NULL);
	while (s[count] != '\0')
	{
		new_s[count] = (*f)(count, s[count]);
		count++;
	}
	if (new_s == NULL)
		return (NULL);
	new_s[count] = '\0';
	return (new_s);
}
