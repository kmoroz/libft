/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 20:45:18 by ksmorozo      #+#    #+#                 */
/*   Updated: 2020/11/04 20:45:18 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	sub_function(unsigned int number, char c)
{
	return ('x');
}

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_s;
	unsigned int	count;

	count = 0;
	new_s = malloc(ft_strlen(s) + 1);
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
/*
** int main()
** {
** 	char *result;
** 	char test[] = "zhopa";
**
** 	result = ft_strmapi(test, sub_function);
** }
*/
