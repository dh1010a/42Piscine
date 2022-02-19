/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopaek <dopaek@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 09:50:38 by dopaek            #+#    #+#             */
/*   Updated: 2022/02/05 11:22:25 by min-skim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	set_updown(int	x, char left, char mid, char right)
{
	int	i;

	i = 0;
	ft_putchar(left);
	if (x > 1)
	{
		while (i < x - 2)
		{
			ft_putchar(mid);
			i++;
		}
		ft_putchar(right);
	}
}

void	set_mid(int x, char mid)
{
	int	i;

	i = 0;
	ft_putchar(mid);
	if (x > 1)
	{
		while (i < x - 2)
		{
			ft_putchar(' ');
			i++;
		}
		ft_putchar(mid);
	}
}

void	rush(int x, int y)
{
	int				i;

	i = 0;
	if (x < 1 || y < 1)
		return ;
	else
	{
		set_updown(x, 'A', 'B', 'C');
		ft_putchar('\n');
		if (y > 1)
		{
			while (i < y - 2)
			{
				set_mid(x, 'B');
				ft_putchar('\n');
				i++;
			}
			set_updown(x, 'A', 'B', 'C');
			ft_putchar('\n');
		}
	}
}
