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

int	isnegative(char *str)
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

int	ft_atoi(const char *str)
{
	int count;
	int countminus;
	int strtonum;
	int isnegativenum;

	isnegativenum = isnegative(str);
	count = 0;
	countminus = 0;
	strtonum = 0;
	while (str[count] == ' ' || str[count] == '\n' || str[count] == '\f'
	|| str[count] == '\r' || str[count] == '\t' || str[count] == '\v'
	|| str[count] == '-' || str[count] == '+')
		count++;
	while (str[count] >= '0' && str[count] <= '9')
	{
		strtonum = 10 * strtonum + (str[count] - '0');
		count++;
	}
	if (isnegativenum % 2 == 1)
		return (strtonum * -1);
	return (strtonum);
}
