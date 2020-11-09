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

int		count_int_length(int n)
{
	int		length;

	while (n != 0)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char	*num_to_str;
	char	digit;
	int		count;
	int		length;

	count = 0;
	length = count_int_length(n) - 1;
	num_to_str = malloc(count_int_length(n) + 1);
	while (n != 0)
	{
		digit = (n % 10) + '0';
		num_to_str[length] = digit;
		count++;
		length--;
		n = n / 10;
	}
	num_to_str[count] = '\0';
	return (num_to_str);
}
