/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 13:21:02 by ksmorozo      #+#    #+#                 */
/*   Updated: 2020/11/01 13:21:02 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*result;
	size_t	count_array[2];

	count_array[0] = 0;
	count_array[1] = 0;
	while (count_array[0] < n && result == NULL)
	{
		if (s1[count_array[0]] == s2[count_array[1]])
		{
			result = s1 + count_array[0];
			while (s2[count_array[1]] != '\0' && count_array[0] < n)
			{
				if (s1[count_array[0]] != s2[count_array[1]])
				{
					count_array[1] = 0;
					result = NULL;
					break ;
				}
				count_array[0]++;
				count_array[1]++;
			}
		}
		count_array[0]++;
	}
	return (result);
}
/*
** int main()
** {
** 	char string[] = "cheesetown";
** 	char substring[] = "town";
** 	char *result;
** 	result = ft_strnstr(string, substring, 11);
** }
*/
