/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopaek <dopaek@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:23:32 by dopaek            #+#    #+#             */
/*   Updated: 2022/02/17 12:31:43 by dopaek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long	i;
	long long	result;

	i = 1;
	result = (long long)nb;
	if (nb <= 0)
		return (0);
	while (i * i <= result)
	{
		if (i * i == result)
			return ((int)i);
		i++;
	}
	return (0);
}
