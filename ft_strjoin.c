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

#include "libft.h"

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
** 	char *result;
** 	result = ft_strjoin(first, second);
** }
*/
