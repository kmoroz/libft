/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 12:21:46 by ksmorozo      #+#    #+#                 */
/*   Updated: 2021/07/07 12:16:11 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_int_length(int n)
{
	int		length;

	length = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

static int	copy_digit(int n, int length, char *dest)
{
	char	digit;

	digit = (n % 10) + '0';
	dest[length - 1] = digit;
	n = n / 10;
	return (n);
}

static void	is_negative_number(int *is_negative_num, int n)
{
	if (n < 0)
		*is_negative_num = 1;
	else
		*is_negative_num = 0;
}

static char	*copy(int n)
{
	char	*dest;
	int		count;
	int		length;
	int		is_negative_num;

	count = 0;
	is_negative_number(&is_negative_num, n);
	if (n < 0)
		n = n * -1;
	length = count_int_length(n);
	dest = (char *)malloc(length + is_negative_num + 1);
	if (dest == NULL)
		return (NULL);
	length += is_negative_num;
	dest[length] = '\0';
	while (length > (0 + is_negative_num))
	{
		n = copy_digit(n, length, dest);
		count++;
		length--;
	}
	if (is_negative_num == 1)
		dest[0] = '-';
	return (dest);
}

char	*ft_itoa(int n)
{
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	return (copy(n));
}
