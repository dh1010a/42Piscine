/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopaek <dopaek@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:23:55 by dopaek            #+#    #+#             */
/*   Updated: 2022/02/17 19:32:07 by dopaek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long long	i;
	long long	temp;

	temp = nb;
	if (nb <= 1)
		return (0);
	i = 2;
	while (i * i <= temp)
	{
		if (temp % i == 0)
			return (0);
		i++;
	}
	return (1);
}
