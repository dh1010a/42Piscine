/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hehwang <hehwang@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 09:28:53 by hehwang           #+#    #+#             */
/*   Updated: 2022/02/12 17:23:36 by sryou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	**init_map(int size)
{
	int	**map;
	int	i;
	int	j;

	map = (int **)malloc(sizeof(int *) * size);
	i = 0;
	while (i < size)
	{
		map[i] = (int *)malloc(sizeof(int) * size);
		j = 0;
		while (j < size)
		{
			map[i][j] = 0;
			j++;
		}
		i++;
	}
	return (map);
}
