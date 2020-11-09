/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 13:44:02 by ksmorozo      #+#    #+#                 */
/*   Updated: 2020/11/03 13:44:02 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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

int		ft_char_in_set(char const *set, char c)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

int		ft_get_length_of_left_trim(char const *str, char const *set)
{
	int length_of_string;
	int count;

	length_of_string = ft_strlen(str);
	count = 0;
	while (count < length_of_string)
	{
		if (ft_char_in_set(set, str[count]) == 1)
			count++;
		else
			return (count);
	}
}

int		ft_get_length_of_right_trim(char const *str, char const *set)
{
	int length_of_string;
	int count;

	length_of_string = ft_strlen(str);
	count = ft_strlen(str) - 1;
	while (count >= 0)
	{
		if (ft_char_in_set(set, str[count]) == 1)
			count--;
		else
			return (length_of_string - (count + 1));
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_str;
	int		left_trim;
	int		right_trim;
	int		starting_index;
	int		finishing_index;
	int		count;

	left_trim = ft_get_length_of_left_trim(s1, set);
	right_trim = ft_get_length_of_right_trim(s1, set);
	trimmed_str = malloc((ft_strlen(s1) - (left_trim + right_trim)) + 1);
	count = 0;
	starting_index = left_trim;
	finishing_index = ft_strlen(s1) - right_trim;
	while (s1[starting_index] != s1[finishing_index])
	{
		trimmed_str[count] = s1[starting_index];
		count++;
		starting_index++;
	}
	trimmed_str[count] = '\0';
	return (trimmed_str);
}
/*
** int main()
** {
** 	char * set = "atu";
** 	char *c = "aaataubenttt";
** 	char *result;
**
** 	result = ft_strtrim(c, set);
** }
*/
