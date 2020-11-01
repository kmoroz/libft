/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/28 16:43:08 by ksmorozo      #+#    #+#                 */
/*   Updated: 2020/10/28 16:43:08 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int argument)
{
	if ((argument >= 'a' && argument <= 'z')
	|| (argument >= 'A' && argument <= 'Z'))
		return (1);
	return (0);
}

int main()
{
	printf("%d", ft_isalpha('u'));
}