/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 16:28:38 by ksmorozo      #+#    #+#                 */
/*   Updated: 2020/10/30 16:28:38 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int argument)
{
	if (argument >= '0' && argument <= '9')
		return (1);
	return (0);
}

int main()
{
	printf("%d", ft_isdigit('5'));
}