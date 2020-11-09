/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 11:18:47 by ksmorozo      #+#    #+#                 */
/*   Updated: 2020/10/30 11:18:47 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int ch)
{
	int		count;
	char	*modifiable_str;

	count = 0;
	modifiable_str = str;
	while (*modifiable_str != '\0')
	{
		if (*modifiable_str == ch)
			return (modifiable_str);
		modifiable_str++;
	}
	return ('\0');
}
/*
** int main()
** {
** 	char my_thoughts[] = "help";
** 	printf("%s", ft_strchr(my_thoughts, 'l'));
** }
*/
