/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 17:12:06 by ksmorozo      #+#    #+#                 */
/*   Updated: 2020/10/30 17:12:06 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int arg)
{
	if (arg >= 'a' && arg <= 'z')
		return (arg - 32);
	return (arg);
}
/*
** int main()
** {
** 	printf("%c", ft_toupper('Y'));
** 	printf("%c", ft_toupper(' '));
** 	printf("%c", ft_toupper('u'));
** 	printf("%c", ft_toupper('?'));
** }
*/
