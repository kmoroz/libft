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

static char	**free_all(char **final_array)
{
	int count;

	count = 0;
	while (final_array[count])
	{
		free(final_array[count]);
		count++;
	}
	free(final_array);
	return (NULL);
}

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

static char	**split(char *trimed_str, char dlm, int word_count)
{
	int		count;
	char	**final_array;
	char	*start;

	count = 0;
	final_array = (char**)malloc((word_count + 1) * sizeof(char *));
	if (final_array == NULL)
		return (NULL);
	while (count < word_count)
	{
		start = trimed_str;
		while (*trimed_str != dlm && *trimed_str)
			trimed_str++;
		final_array[count] = (char*)malloc(trimed_str - start + 1);
		if (!(final_array[count]))
			free_all(final_array);
		ft_strlcpy(final_array[count], start, trimed_str - start + 1);
		count++;
		trimed_str = trimed_str + number_of_delimeters_to_skip(trimed_str, dlm);
	}
	final_array[count] = 0;
	return (final_array);
}

char		**ft_split(char const *str, char dlm)
{
	int		word_count;
	char	*trimed_str;
	char	**result;

	trimed_str = ft_strtrim(str, &dlm);
	if (trimed_str == NULL)
		return (NULL);
	word_count = get_word_count((char*)trimed_str, dlm);
	result = split(trimed_str, dlm, word_count);
	free(trimed_str);
	return (result);
}
/*
** int main()
** {
** 	char str[] = "split       this for   me  !";
** 	char c = ' ';
** 	ft_split(str, c);
** }
*/
