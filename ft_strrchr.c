/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 18:01:12 by ksmorozo      #+#    #+#                 */
/*   Updated: 2020/10/30 18:01:12 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int		count;
	char	*last_pos;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] == ch)
			last_pos = str + count;
		count++;
	}
	return (last_pos);
}
/*
** int main()
** {
** 	char my_string[] = "poop";
** 	char *test;
** 	test = ft_strrchr(my_string, 'p');
** }
*/
