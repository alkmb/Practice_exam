/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmb <kmb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 03:12:46 by kmb               #+#    #+#             */
/*   Updated: 2023/12/14 03:23:57 by kmb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	do_op(char *num1, char *oper, char *num2)
{
	int	n1, n2, res;

	n1 = atoi(num1);
	n2 = atoi(num2);
	res = 0;
	if (oper[0] == '*')
		res = n1 *= n2;
	else if (oper[0] == '/')
		res = n1 /= n2;
	else if (oper[0] == '+')
		res = n1 += n2;
	else if (oper[0] == '-')
		res = n1 -= n2;
	else if (oper[0] == '%')
		res = n1 &= n2;
	return res;
}

int main (int argc, char **argv)
{
	int res;

	res = 0;
	if (argc == 4)
	{
		res = do_op(argv[1], argv[2], argv[3]);
		printf ("%d", res);
	}
	printf("\n");
}
