/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopaek <dopaek@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 20:47:19 by dopaek            #+#    #+#             */
/*   Updated: 2022/02/22 20:47:20 by dopaek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
int	print_error(char cal, int y)
{
	if (cal == '/' && y == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (1);
	}
	if (cal == '%' && y == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (1);
	}
	return (0);
}

void	ft_doop(int x, char cal, int y)
{
	int		(*tab[5])(int, int);
	int		result;
	char	*op;
	int		i;

	tab[0] = add;
	tab[1] = minus;
	tab[2] = mul;
	tab[3] = div;
	tab[4] = mod;
	op = "+-*/%";
	i = 0;
	if (print_error(cal, y))
		return ;
	while (i < 5)
	{
		if (op[i] == cal)
		{
			result = tab[i](x, y);
			ft_putnbr(result);
		}
		i++;
	}
	write(1, "\n", 1);
}
