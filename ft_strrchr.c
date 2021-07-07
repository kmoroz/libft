/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 18:01:12 by ksmorozo      #+#    #+#                 */
/*   Updated: 2021/07/07 12:19:36 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int		len;
	char	*last_pos;

	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str[len] == (unsigned char)ch)
		{
			last_pos = (char *)&str[len];
			return (last_pos);
		}
		len--;
	}
	return (NULL);
}
