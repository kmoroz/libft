/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 12:21:46 by ksmorozo      #+#    #+#                 */
/*   Updated: 2020/11/04 12:21:46 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_int_length(int n)
{
	int		length;

	length = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n = n * -1;
	while (n > 0)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

static char		*copy_minint(char *dest, const char *src, size_t size)
{
	size_t count;

	count = 0;
	while (src[count] != '\0' && count < (size - 1))
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

static int		copy_digit(int n, int length, char *dest)
{
	char	digit;

	digit = (n % 10) + '0';
	dest[length - 1] = digit;
	n = n / 10;
	return (n);
}

static char		*copy(int n)
{
	char	*dest;
	char	digit;
	int		count;
	int		length;
	int		is_negative_number;

	count = 0;
	is_negative_number = n < 0 ? 1 : 0;
	length = count_int_length(n);
	dest = (char*)malloc(length + is_negative_number + 1);
	if (dest == NULL)
		return (NULL);
	if (n < 0)
		n = n * -1;
	length = length += is_negative_number;
	while (length > (0 - is_negative_number))
	{
		n = copy_digit(n, length, dest);
		count++;
		length--;
	}
	if (is_negative_number == 1)
		dest[0] = '-';
	dest[count - is_negative_number] = '\0';
	return (dest);
}

char			*ft_itoa(int n)
{
	char	*num_to_str;

	if (n == -2147483648)
	{
		if (!(num_to_str = (char *)malloc(12 * sizeof(char))))
			return (NULL);
		return (copy_minint(num_to_str, "-2147483648", 12));
	}
	return (copy(n));
}
/*
** int main()
** {
** 	char *result1; char *result2; char *result3;char *result4;
** 	result1 = ft_itoa(-2147483648);
** 	result2 = ft_itoa(156);
** 	result3 = ft_itoa(-1234);
** 	result4 = ft_itoa(-623);
** }
*/
