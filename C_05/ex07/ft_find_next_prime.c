/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopaek <dopaek@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:24:15 by dopaek            #+#    #+#             */
/*   Updated: 2022/02/15 13:24:16 by dopaek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb)
{
	long long	i;

	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 4;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	long long	i;

	if (nb <= 2)
		return (2);
	i = 1;
	if (is_prime(nb) == 1)
		return (nb);
	else
	{
		while (is_prime(nb) == 0)
			nb++;
	}
	return (nb);
}
