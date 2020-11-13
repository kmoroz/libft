/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 13:31:41 by ksmorozo      #+#    #+#                 */
/*   Updated: 2020/11/03 13:31:41 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		count;

	substr = malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	if (ft_strlen(s) <= start)
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
/*
** int main()
** {
** 	char big_string[] = "01234";
** 	char *result;
** 	result = ft_substr(big_string, 7, 10);
** }
*/
