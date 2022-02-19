/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopaek <dopaek@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:04:47 by dopaek            #+#    #+#             */
/*   Updated: 2022/02/07 17:02:01 by dopaek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int *arr, int n)
{
	int	i;

	i = 0;
	while (++i < n)
	{
		if (arr[i - 1] >= arr[i])
			return ;
	}
	i = -1;
	while (++i < n)
	{
		ft_putchar(arr[i] + 48);
	}
	if (arr[0] < 10 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int	n)
{
	int	arr[10];
	int	i;

	if (n < 1 || n > 9)
		return ;
	i = -1;
	while (++i < n)
		arr[i] = i;
	while (arr[0] <= 10 - n)
	{
		print(arr, n);
		arr[n - 1]++;
		i = n - 1;
		while (i >= 0 && n > 1)
		{
			if (arr[i] > 9)
			{
				arr[i - 1]++;
				arr[i] = arr[i - 1];
			}
			i--;
		}
	}
}
