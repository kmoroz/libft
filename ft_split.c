/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/09 11:35:51 by ksmorozo      #+#    #+#                 */
/*   Updated: 2020/11/09 11:35:51 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_word_count(char *str, char delimiter)
{
	int count;

	count = 1;
	if (ft_strlen(str) == 0)
		return (0);
	while (*str != '\0')
	{
		if (*str == delimiter)
		{
			count++;
			while (*str == delimiter)
				str++;
		}
		str++;
	}
	return (count);
}

static char	*copy_string(char const *str, int len)
{
	char	*new_string;
	int		count;

	count = 0;
	new_string = (char *)malloc(len + 1);
	if (new_string == NULL)
		return (NULL);
	while (count < len)
	{
		new_string[count] = str[count];
		count++;
	}
	new_string[count] = '\0';
	return (new_string);
}

static int	number_of_delimeters_to_skip(char *trimed_str, char dlm)
{
	int count;

	count = 0;
	while (*trimed_str == dlm)
	{
		count++;
		trimed_str++;
	}
	return (count);
}

char		**ft_split(char const *str, char dlm)
{
	int		word_count;
	int		count;
	char	**final_array;
	char	*start;
	char	*trimed_str;

	trimed_str = ft_strtrim(str, &dlm);
	if (trimed_str == NULL)
		return (NULL);
	word_count = get_word_count((char*)trimed_str, dlm);
	count = 0;
	final_array = malloc((word_count + 1) * sizeof(char*));
	if (final_array == NULL)
		return (NULL);
	while (count < word_count)
	{
		start = trimed_str;
		while (*trimed_str != dlm && *trimed_str)
			trimed_str++;
		final_array[count] = copy_string(start, trimed_str - start);
		count++;
		trimed_str = trimed_str + number_of_delimeters_to_skip(trimed_str, dlm);
	}
	final_array[count] = 0;
	return (final_array);
}
/*
** int main()
** {
** 	char **result;
** 	char str[] = "      split       this for   me  !       ";
** 	char c = ' ';
** 	result = ft_split(str, c);
** }
*/
