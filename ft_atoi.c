/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ksmorozo <ksmorozo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 12:06:30 by ksmorozo      #+#    #+#                 */
/*   Updated: 2020/11/01 12:06:30 by ksmorozo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_negative(char *str)
{
	int count;
	int countminus;

	count = 0;
	countminus = 0;
	while (str[count] != '\0')
	{
		if (str[count] == '-')
		{
			countminus++;
			count++;
		}
		else
			count++;
	}
	if (countminus % 2 == 1)
		return (1);
	else
		return (0);
}

int			ft_atoi(const char *str)
{
	int count;
	int strtonum;
	int isnegativenum;

	count = 0;
	strtonum = 0;
	while (str[count] == ' ' || str[count] == '\n' || str[count] == '\f'
	|| str[count] == '\r' || str[count] == '\t' || str[count] == '\v')
		count++;
	while (str[count] == '-' || str[count] == '+')
		count++;
	isnegativenum = is_negative((char *)str);
	while (str[count] >= '0' && str[count] <= '9')
	{
		strtonum = 10 * strtonum + (str[count] - '0');
		count++;
	}
	if (isnegativenum % 2 == 1)
		strtonum = strtonum * -1;
	return (strtonum);
}
/*
** int main()
** {
** 	char test[] = "\t\v\f\r\n \f- \f\t\n\r    06050";
** 	char test2[] = "\t\v\f\r\n \f- \f\t\n\r    06050";
** 	int result1;
** 	int result2;
** 	result1 = ft_atoi(test);
** 	result2 = atoi(test2);
** }
*/
