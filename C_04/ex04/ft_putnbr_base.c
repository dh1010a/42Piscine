/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopaek <dopaek@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:16:55 by dopaek            #+#    #+#             */
/*   Updated: 2022/02/12 13:46:32 by dopaek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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

void	ft_print(unsigned int nbr, char *base, unsigned int base_len)
{
	if (nbr >= base_len)
	{
		ft_print(nbr / base_len, base, base_len);
		ft_print(nbr % base_len, base, base_len);
	}
	else
		ft_putchar(base[nbr]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;
	int	result;

	if (valid_base(base) != 1)
		return ;
	base_len = 0;
	while (base[base_len])
		base_len++;
	result = 0;
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_print(-nbr, base, base_len);
	}
	else
		ft_print(nbr, base, base_len);
}
