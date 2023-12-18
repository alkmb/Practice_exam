/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmb <kmb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 02:57:14 by kmb               #+#    #+#             */
/*   Updated: 2023/12/14 03:11:05 by kmb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	camel_to_snake(char *str)
{
	while (*str)
	{
		if ((*str >= 'A' && *str <= 'Z'))
		{
			write(1, "_", 1);
			*str += 32;
		}
		write (1, str++, 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		camel_to_snake(argv[1]);
	write (1, "\n", 1);
}
