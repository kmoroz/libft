/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/05 13:38:36 by ksmorozo      #+#    #+#                 */
/*   Updated: 2020/11/05 13:38:36 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char *n_to_str;

	n_to_str = ft_itoa(n);
	while (*n_to_str != '\0')
	{
		write(fd, n_to_str, 1);
		n_to_str++;
	}
}
/*
** int main()
** {
** 	ft_putnbr_fd(81, 1);
** }
*/
