
#include <unistd.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdbool.h>

int		get_word_count(char *str, char delimiter)
{
	//TODO: trim
	int count;

	count = 1;
	while (*str != '\0')
	{
		if (*str == delimiter)
			count++;
		str++;
	}
	return (count);
}

char	*copy_string(char const *str, int len)
{
	char *new_string;
	int count;

	count = 0;
	new_string = malloc(len + 1);
	while (count < len)
	{
		new_string[count] = str[count];
		count++;
	}
	new_string[count] = '\0';
	return (new_string);
}

char	**ft_split(char const *str, char dlm)
{
	//DECLARE VARIABLES( your double pointer to return, wordcount, current_position, count)
	int word_count;
	int count;
	char **final_array;
	char *current_position;

	//get word count
	word_count = get_word_count(str, dlm);
	count = 0;

	//allocate memory to your double pointer
	final_array = malloc((word_count + 1) * sizeof(char*));

	while (count < word_count)
	{
		current_position = str;

		while (*str != dlm)
			str++;
		final_array[count] = copy_string(current_position, str - current_position);
		count++;
		str++;
	}
	final_array[count] = 0;

	return (final_array);
}



int main()
{
	char **result;
	char str[] = "you,are,not,alone";
	char c = ',';

	result = ft_split(str, c);
}