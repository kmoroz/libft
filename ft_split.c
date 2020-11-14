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

	count = -1;
	while (*str != '\0')
	{
		if (*str == delimiter)
		{
			count++;
			while(*str == delimiter)
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
	while (count < len)
	{
		new_string[count] = str[count];
		count++;
	}
	new_string[count] = '\0';
	return (new_string);
}

char		**ft_split(char const *str, char dlm)
{
	int		word_count;
	int		count;
	char	**final_array;
	char	*current_position;
	int		len;
	char	*strimed_str;

	word_count = get_word_count((char*)str, dlm);
	count = 0;
	final_array = malloc((word_count + 1) * sizeof(char*));

	while (*str == dlm)
		str++;

	while (count < word_count)
	{
		current_position = str;
		while (*str != dlm && *str)
			str++;

		len = str - current_position;
		final_array[count] = copy_string(current_position, len);
		count++;

		while (*str == dlm)
			str++;
	}
	final_array[count] = 0;
	return (final_array);
}
/*
** int main()
** {
** 	char **result;
** 	char str[] = "                  olol";
** 	char c = ' ';
** 	result = ft_split(str, c);
** }
*/
