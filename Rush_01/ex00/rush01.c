/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sryou <sryou@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 08:24:12 by sryou             #+#    #+#             */
/*   Updated: 2022/02/12 21:15:41 by dopaek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	main(int argc, char **argv)
{
	int	watch_size;
	int	map_size;
	int	*watch;
	int	**map;
	int	idx;

	if (argc != 2)
		return (print_error());
	watch_size = is_valid_string(argv[1]);
	if (watch_size == 0)
		return (print_error());
	map_size = watch_size / 4;
	watch = init_watch(argv[1], watch_size);
	map = init_map(map_size);
	if (recursive(map, watch, 0, map_size) == 0)
		(void)print_error();
	free(watch);
	idx = 0;
	while (idx < map_size)
		free(map[idx++]);
	free(map);
	return (0);
}
