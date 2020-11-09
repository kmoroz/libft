/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 13:44:02 by ksmorozo      #+#    #+#                 */
/*   Updated: 2020/11/03 13:44:02 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*buffer1;
	char	*buffer2;
	size_t	count;

	buffer1 = src;
	buffer2 = dest;
	count = 0;
	while (count < n)
	{
		buffer2[count] = buffer1[count];
		count++;
	}
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *new_str;

	new_str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	ft_memcpy(new_str, s1, ft_strlen(s1));
	ft_memcpy(new_str + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	if (new_str == NULL)
		return (NULL);
	return (new_str);
}
/*
** int main()
** {
** 	char first[] = "I hear you ";
** 	char second[] = "call my name";
**
** 	char *result;
** 	result = ft_strjoin(first, second);
** }
*/
