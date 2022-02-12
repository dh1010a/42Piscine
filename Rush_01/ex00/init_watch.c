/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_watch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopaek <dopaek@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 09:41:25 by dopaek            #+#    #+#             */
/*   Updated: 2022/02/12 09:41:26 by dopaek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	*init_watch(char *str, int size)
{
	int	*watch;
	int	i;

	watch = (int *)malloc(sizeof(int) * size);
	i = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			watch[i++] = *str - '0';
		str++;
	}
	return (watch);
}
