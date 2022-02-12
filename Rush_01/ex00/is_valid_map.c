/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sryou <sryou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 10:52:15 by sryou             #+#    #+#             */
/*   Updated: 2022/02/12 18:49:25 by sryou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	is_same(int *arr1, int *arr2, int size)
{
	int	idx;

	idx = 0;
	while (idx < size)
	{
		if (arr1[idx] != arr2[idx])
			return (0);
		idx++;
	}
	return (1);
}

int	is_less_and_change(int *val1, int *val2)
{
	if (*val1 < *val2)
	{
		*val1 = *val2;
		return (1);
	}
	return (0);
}

int	count_blocks_colrow(int **map, int idx, int map_size, int type)
{
	int	temp;
	int	blocks;
	int	min_height;
	int	now_height;

	temp = 0;
	blocks = 0;
	min_height = 0;
	while (temp < map_size)
	{
		if (type == 0)
			now_height = map[temp][idx];
		else if (type == 1)
			now_height = map[map_size - 1 - temp][idx];
		else if (type == 2)
			now_height = map[idx][temp];
		else
			now_height = map[idx][map_size - 1 - temp];
		if (is_less_and_change(&min_height, &now_height))
			blocks++;
		temp++;
	}
	return (blocks);
}

int	*count_blocks(int **map, int map_size)
{
	int	*watch;
	int	idx;

	watch = (int *)malloc(sizeof(int) * map_size * 4);
	idx = 0;
	while (idx < map_size)
	{
		watch[idx] = count_blocks_colrow(map, idx, map_size, 0);
		watch[map_size * 1 + idx] = count_blocks_colrow(map, idx, map_size, 1);
		watch[map_size * 2 + idx] = count_blocks_colrow(map, idx, map_size, 2);
		watch[map_size * 3 + idx] = count_blocks_colrow(map, idx, map_size, 3);
		idx++;
	}
	return (watch);
}

int	is_valid_map(int **map, int *watch, int map_size)
{
	int	*watch_for_map;
	int	is_valid;

	watch_for_map = count_blocks(map, map_size);
	is_valid = is_same(watch_for_map, watch, map_size * 4);
	free(watch_for_map);
	return (is_valid);
}
