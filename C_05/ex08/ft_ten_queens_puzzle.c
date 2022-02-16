/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopaek <dopaek@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:46:05 by dopaek            #+#    #+#             */
/*   Updated: 2022/02/16 14:46:06 by dopaek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	abs(int a)
{
	if (a < 0)
		return (-a);
	else
		return (a);
}

int	is_putable(char *map, int idx_x, int idx_y)
{
	int	i;
	int	able_up;
	int	able_cross;

	i = 0;
	able_up = 1;
	able_cross = 1;
	while (i < idx_y)
	{
		if (map[i] == idx_x)
			able_up = 0;
		i++;
	}
	i = 0;
	while (i < idx_y)
	{
		if (abs(map[i] + i) == abs(idx_x + idx_y)
			|| abs(map[i] - i) == abs(idx_x - idx_y))
			able_cross = 0;
		i++;
	}
	if (able_up == 1 && able_cross == 1)
		return (1);
	else
		return (0);
}

void	recursive(char *map, int *solution, int idx_x, int idx_y)
{

	if (idx_y == 10)
	{
		idx_y = 0;
		while (idx_y < 10)
			ft_putchar(map[idx_y++]);
		ft_putchar('\n');
		(*solution)++;
		return ;
	}
	while (idx_x < 10)
	{
		if (is_putable(map, idx_x, idx_y))
		{
			map[idx_y] = idx_x + '0';
			recursive(map, solution, idx_x, idx_y + 1);
		}
		idx_x++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	map[10];
	int		solution;
	int		idx_x;
	int		idx_y;

	solution = 0;
	idx_x = 0;
	idx_y = 0;
	recursive(map, &solution, idx_x, idx_y);
	return (solution);
}
