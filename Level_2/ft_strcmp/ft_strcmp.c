/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmb <kmb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 03:44:26 by kmb               #+#    #+#             */
/*   Updated: 2023/12/14 03:50:54 by kmb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

int main (int argc, char **argv)
{
	if (argc != 3)
		write (1, "\n", 1);
	else
	{
		if (ft_strcmp(argv[1], argv[2]) > 0)
			printf ("s1 is greater than s2.");
		else if (ft_strcmp(argv[1], argv[2]) < 0)
			printf ("s2 is greater than s1.");
		else if (ft_strcmp(argv[1], argv[2]) == 0)
			printf ("They are equal.");
		else
			printf("Nothing found.");
	}
}
