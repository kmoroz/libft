/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/28 10:48:52 by ksmorozo      #+#    #+#                 */
/*   Updated: 2020/10/28 10:48:52 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t count;
	char *buffer;

	count = 0;
	buffer = str;
	while (buffer[count] != '\0' && n != 0)
	{	
		buffer[count] = c;
		count++;
		n--;
	}
}

int main()
{
	char my_thoughts[] = "help";
	char my_thoughts2[] = "help2";
	ft_memset(my_thoughts, '?', 6);
	memset(my_thoughts2, '?', 6);
}