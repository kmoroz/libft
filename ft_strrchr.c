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
	int				count;
	unsigned char	*last_pos;

	count = 0;
	if (ft_strlen((char*)str) == 0)
		return (NULL);
	while (count < ft_strlen((char*)str))
	{
		if ((unsigned char)ch == '\0')
			return ((char*)str + ft_strlen((char*)str));
		if (str[count] == (unsigned char)ch)
			last_pos = (unsigned char*)str + count;
		count++;
	}
	return ((char*)last_pos);
}
/*
** int main()
** {
** 	char my_string[] = "poop";
** 	char *test;
** 	test = ft_strrchr(my_string, 'p');
** }
*/
