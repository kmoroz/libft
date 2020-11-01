/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 17:56:38 by ksmorozo      #+#    #+#                 */
/*   Updated: 2020/10/30 17:56:38 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int ft_tolower(int arg)
{
	if (arg >= 'A' && arg <= 'Z')
		return (arg + 32);
	return (arg);
}

int main()
{
	printf("%c", ft_tolower('y'));
	printf("%c", ft_tolower(' '));
	printf("%c", ft_tolower('U'));
	printf("%c", ft_tolower('?'));
}