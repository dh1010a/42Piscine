/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopaek <dopaek@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 10:58:18 by dopaek            #+#    #+#             */
/*   Updated: 2022/02/13 10:58:21 by dopaek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	base_over(char *base, int base_len)
{
	int	i;
	int	j;

	i = -1;
	while (++i < base_len - 1)
	{
		j = i;
		while (++j < base_len)
		{
			if (base[i] == base[j])
				return (0);
		}
	}
	return (1);
}

int	valid_base(char *base)
{
	int	base_len;

	base_len = 0;
	while (base[base_len])
	{
		if (base[base_len] == '+' || base[base_len] == '-'
			|| base[base_len] == ' '
			|| (base[base_len] >= 9 && base[base_len] <= 13))
			return (0);
		base_len++;
	}
	if (base_len < 2)
		return (0);
	if (base_over(base, base_len) != 1)
		return (0);
	return (1);
}

int	co_re(char *str, char *base, int result, int base_len)
{
	int	i;
	int	error;

	while (*str)
	{
		i = -1;
		while (base[++i])
		{
			if (base[i] == *str)
			{
				result = result * base_len + i;
				break ;
			}
		}
		if (i < base_len)
			str++;
		else
			return (result);
	}
	return (result);
}

int	ft_atoi(char *str, char *base, int result, int base_len)
{
	int	negative;

	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	negative = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negative *= -1;
		str++;
	}
	result = co_re(str, base, result, base_len);
	return (result * negative);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_len;
	int	result;
	int	negative;

	result = 0;
	if (valid_base(base) != 1)
		return (0);
	base_len = 0;
	while (base[base_len])
		base_len++;
	result = ft_atoi(str, base, result, base_len);
	return (result);
}
