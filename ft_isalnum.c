/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 12:33:33 by ksmorozo      #+#    #+#                 */
/*   Updated: 2020/12/02 23:58:28 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int argument)
{
	if ((argument >= 'a' && argument <= 'z')
	|| (argument >= 'A' && argument <= 'Z')
	|| (argument >= '0' && argument <= '9'))
		return (1);
	return (0);
}
