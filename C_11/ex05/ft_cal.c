/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cal.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopaek <dopaek@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 20:45:47 by dopaek            #+#    #+#             */
/*   Updated: 2022/02/22 20:45:48 by dopaek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		add(int n1, int n2)
{
	return (n1 + n2);
}

int		minus(int n1, int n2)
{
	return (n1 - n2);
}

int		mul(int n1, int n2)
{
	return (n1 * n2);
}

int		div(int n1, int n2)
{
	if (n1 / n2 == 0)
		return (ft_putstr("Stop : division by zero"));
	return (n1 / n2);
}

int		mod(int n1, int n2)
{
	if (n1 % n2 == 0)
		return (ft_putstr("Stop : modulo by zero"));
	return (n1 % n2);
}

