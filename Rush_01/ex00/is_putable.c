/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_putable.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopaek <dopaek@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 10:36:24 by dopaek            #+#    #+#             */
/*   Updated: 2022/02/12 17:24:02 by sryou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	is_putable(int **map, int idx_y, int idx_x, int value)
{
	int	x;
	int	y;
	int	x_over;
	int	y_over;

	x = idx_x;
	y = idx_y;
	x_over = 0;
	y_over = 0;
	while (--idx_x >= 0)
	{
		if (map[y][idx_x] == value)
			x_over = 1;
	}
	while (--idx_y >= 0)
	{
		if (map[idx_y][x] == value)
			y_over = 1;
	}
	if (x_over != 1 && y_over != 1)
		return (1);
	else
		return (0);
}
