/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopaek <dopaek@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 09:32:11 by dopaek            #+#    #+#             */
/*   Updated: 2022/02/20 09:32:11 by dopaek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	valid_base(char *base);
int	base_over(char *base, int base_len);
int	co_re(char *str, char *base, int result, int base_len);
int	ft_atoi(char *str, char *base, int result, int base_len);
int	ft_atoi_base(char *str, char *base);

char	*ft_putnbr_base(int nbr, char *base, int len)
{
	int		base_len;
	int		i;
	char	*final;

	final = (char *)malloc(sizeof(char) * (len + 1));
	if (valid_base(base) != 1)
		return (0);
	base_len = 0;
	while (base[base_len])
		base_len++;
	i = len - 1;
	if (nbr < 0)
	{
		final[0] = '-';
		nbr *= -1;
	}
	while (nbr >= base_len)
	{
		final[i] = base[nbr % base_len];
		nbr /= base_len;
		i--;
	}
	final[i] = base[nbr];
	final[len] = 0;
	return (final);
}

int	get_len(int n, char *base)
{
	int	base_len;
	int	len;

	len = 0;
	base_len = 0;
	while (base[base_len])
		base_len++;
	if (base_len == 1)
		return (0);
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n >= base_len)
	{
		n /= base_len;
		len++;
	}
	return (len + 1);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		result;
	char	*final2;
	int		len;

	result = 0;
	result = ft_atoi_base(nbr, base_from);
	if (result == 0)
		return (0);
	len = get_len(result, base_to);
	if (len == 0)
		return (0);
	final2 = ft_putnbr_base(result, base_to, len);
	if (final2 == 0)
		return (0);
	return (final2);
}
