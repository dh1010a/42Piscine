/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopaek <dopaek@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 09:30:31 by dopaek            #+#    #+#             */
/*   Updated: 2022/02/12 12:20:39 by hehwang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"
void	ft_putchar(char c)
{
	write (1, &c, 1);
}
