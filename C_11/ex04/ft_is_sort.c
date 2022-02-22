/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopaek <dopaek@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:28:10 by dopaek            #+#    #+#             */
/*   Updated: 2022/02/22 17:28:11 by dopaek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	asc;
	int	desc;
	int	temp;

	i = -1;
	asc = 0;
	desc = 0;
	while (++i < length - 1)
	{
		temp = f(tab[i], tab[i + 1]);
		if (temp >= 0)
			asc++;
		if (temp <= 0)
			desc++;
	}
	if (asc == i || desc == i)
		return (1);
	return (0);
}
