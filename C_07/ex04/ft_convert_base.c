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
int	ft_strlen(char *str);
int	get_idx_base(char c, char *base);
int	valid_base(char *str);
int	get_nbrlen(unsigned int n, unsigned int base_size);

int	ft_atoi_base(char *str, char *base, int size)
{
	int	i;
	int	n;
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
	n = 0;
	i = get_idx_base(*str++, base);
	while (i >= 0)
	{
		n = n * size + i;
		i = get_idx_base(*str++, base);
	}
	return (n);
}

unsigned int	get_nb(int n)
{
	unsigned int	nb;

	if (n < 0)
		nb = -n;
	else
		nb = n;
	return (nb);
}

int	get_i_len(unsigned int nb, int size, int n)
{
	int	i;

	i = get_nbrlen(nb, size);
	if (n < 0)
		i++;
	return (i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	unsigned int	nb;
	char			*dest;
	int				size;
	int				i;
	int				n;

	n = valid_base(base_from);
	size = valid_base(base_to);
	if (!(n != 0 && size != 0))
		return (NULL);
	n = ft_atoi_base(nbr, base_from, n);
	nb = get_nb(n);
	i = get_i_len(nb, size, n);
	dest = malloc((i + 1) * sizeof(char));
	if (dest == 0)
		return (NULL);
	dest[i] = '\0';
	while (i--)
	{
		dest[i] = base_to[nb % size];
		nb /= size;
	}
	if (n < 0)
		dest[0] = '-';
	return (dest);
}
