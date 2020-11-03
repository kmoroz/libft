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

#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *substr;
	int count;

	substr = malloc(len + 1);
	count = 0;
	while (s[start] != '\0' && count < len)
	{
		substr[count] = s[start];
		count++;
		start++;
	}
	if (substr == NULL)
		return (NULL);
	substr[count] = '\0';
	return (substr);
}

int main()
{
	char big_string[] = "hello I am big";
	char *result;

	result = ft_substr(big_string, 7, 4);
}