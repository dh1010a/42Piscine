/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursive.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sryou <sryou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 09:43:23 by sryou             #+#    #+#             */
/*   Updated: 2022/02/12 18:51:29 by sryou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	recursive(int **map, int *watch, int idx, int map_size)
{
	int	idx_y;
	int	idx_x;
	int	value;

	if (idx == map_size * map_size)
	{
		if (is_valid_map(map, watch, map_size))
			return (print_map(map, map_size));
		else
			return (0);
	}
	idx_y = idx / map_size;
	idx_x = idx % map_size;
	value = 1;
	while (value <= map_size)
	{
		if (is_putable(map, idx_y, idx_x, value))
		{
			map[idx_y][idx_x] = value;
			if (recursive(map, watch, idx + 1, map_size))
				return (1);
		}
		value++;
	}
	return (0);
}
