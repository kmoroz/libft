/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/29 14:35:26 by ksmorozo      #+#    #+#                 */
/*   Updated: 2020/10/29 14:35:26 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	size_t	count;
	char	*buffer1;
	char	*buffer2;

	count = 0;
	buffer1 = ptr1;
	buffer2 = ptr2;
	while (count != num)
	{
		if (buffer1[count] != buffer2[count])
			return (buffer1[count] - buffer2[count]);
		count++;
	}
	return (0);
}

int main()
{
	char firt[] = "DWGaOtP12df0";
	char second[] = "DWgAOTP12DF0";
	printf("%d", ft_memcmp(firt, second, 13));
}