/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 13:44:02 by ksmorozo      #+#    #+#                 */
/*   Updated: 2021/07/07 12:20:28 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_char_in_set(char const *set, char c)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static int	ft_get_length_of_left_trim(char const *str, char const *set)
{
	size_t	length_of_string;
	size_t	count;

	length_of_string = ft_strlen(str);
	count = 0;
	while (count < length_of_string)
	{
		if (ft_char_in_set(set, str[count]) == 1)
			count++;
		else
			break ;
	}
	return (count);
}

static int	ft_get_length_of_right_trim(char const *str, char const *set)
{
	int	length_of_string;
	int	count;

	length_of_string = ft_strlen(str);
	count = 0;
	while (count >= 0)
	{
		if (ft_char_in_set(set, str[length_of_string - 1]) == 1)
		{
			count++;
			length_of_string--;
		}
		else
			break ;
	}
	return (count);
}

static void	copy(char *starting_address,
char *dest, char *finishing_address)
{
	while (starting_address != finishing_address)
	{
		*dest = *starting_address;
		starting_address++;
		dest++;
	}
	*dest = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_str;
	size_t	left_trim;
	size_t	right_trim;

	left_trim = ft_get_length_of_left_trim(s1, set);
	right_trim = ft_get_length_of_right_trim(s1, set);
	if (left_trim == ft_strlen(s1))
	{
		trimmed_str = (char *)malloc(1);
		if (trimmed_str == NULL)
			return (NULL);
		trimmed_str[0] = '\0';
		return (trimmed_str);
	}
	trimmed_str = (char *)malloc(ft_strlen(s1)
			- (left_trim + right_trim) + 1);
	if (trimmed_str == NULL)
		return (NULL);
	copy((char *)s1 + left_trim, trimmed_str,
		(char *)s1 + (ft_strlen(s1) - right_trim));
	return (trimmed_str);
}
