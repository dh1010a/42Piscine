/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopaek <dopaek@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 09:32:17 by dopaek            #+#    #+#             */
/*   Updated: 2022/02/20 09:32:18 by dopaek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	valid_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(str) < 2)
		return (0);
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
			return (0);
		if (str[i] == '+' || str[i] == '-')
			return (0);
		i++;
	}
	return (i);
}

int	get_idx_base(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i])
		if (c == base[i])
			return (i);
	return (-1);
}

int	get_nbrlen(unsigned int n, unsigned int base_size)
{
	if (n < base_size)
		return (1);
	return (1 + get_nbrlen(n / base_size, base_size));
}
