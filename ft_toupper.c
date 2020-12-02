/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 17:12:06 by ksmorozo      #+#    #+#                 */
/*   Updated: 2020/12/03 00:12:12 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int arg)
{
	if (arg >= 'a' && arg <= 'z')
		return (arg - 32);
	return (arg);
}
