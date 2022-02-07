/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopaek <dopaek@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 11:12:15 by dopaek            #+#    #+#             */
/*   Updated: 2022/02/06 15:52:15 by dopaek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	set_updown(int x, char left, char right)
{
	int	i;

	i = 0;
	ft_putchar(left);
	if (x > 1)
	{
		while (i < x - 2)
		{
			ft_putchar('-');
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
	int	i;

	i = 0;
	if (x < 1 || y < 1)
		return ;
	set_updown(x, 'o', 'o');
	ft_putchar('\n');
	if (y > 1)
	{
		while (i < y - 2)
		{
			set_mid(x, '|');
			ft_putchar('\n');
			i++;
		}
		set_updown(x, 'o', 'o');
		ft_putchar('\n');
	}
}
