/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopaek <dopaek@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:47:05 by dopaek            #+#    #+#             */
/*   Updated: 2022/02/21 11:47:06 by dopaek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_printnbr(int nb)
{
	unsigned int	n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = -nb;
	}
	else
		n = nb;
	if (n > 9)
	{
		ft_printnbr(n / 10);
		n %= 10;
	}
	ft_putchar(n + '0');
}

void	ft_prints(char *str)
{
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

void	ft_show_tab(struct s_stock_str *par)
{
	if (!par)
		return ;
	while (par->str)
	{
		ft_prints(par->str);
		ft_printnbr(par->size);
		ft_putchar('\n');
		ft_prints(par->copy);
		par++;
	}
}
