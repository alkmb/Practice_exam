/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmb <kmb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 03:25:23 by kmb               #+#    #+#             */
/*   Updated: 2023/12/14 03:34:05 by kmb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	n;
	int	sign;

	n = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign = -1;
		*str++;
	}
	while (*str)
	{
		n = n * 10 + *str - 48;
		str++;
	}
	return (n * sign);
}

int	main(int argc, char **argv)
{
	int	n, n2;

	if (argc != 2)
		write (1, "\n", 1);
	else
	{
		n = ft_atoi(argv[1]);
		n2 = atoi(argv[1]);
		printf ("My atoi: %d\n", n);
		printf ("Original atoi: %d\n", n2);

	}
}
