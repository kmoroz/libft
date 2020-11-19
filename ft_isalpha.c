/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/19 10:25:31 by ksmorozo      #+#    #+#                 */
/*   Updated: 2020/11/19 10:25:31 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int argument)
{
	if ((argument >= 'a' && argument <= 'z')
	|| (argument >= 'A' && argument <= 'Z'))
		return (1);
	return (0);
}
