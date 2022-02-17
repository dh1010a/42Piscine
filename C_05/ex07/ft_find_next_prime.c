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

int	is_prime(long long temp)
{
	long long	i;

	if (temp <= 1)
		return (0);
	if (temp % 2 == 0 || temp % 3 == 0)
		return (0);
	i = 4;
	while (i * i <= temp)
	{
		if (temp % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	long long	temp;

	temp = nb;
	if (nb <= 2)
		return (2);
	if (is_prime(temp) == 1)
		return ((int)temp);
	else
	{
		while (is_prime(temp) == 0)
			temp++;
	}
	return ((int)temp);
}
