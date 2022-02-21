/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopaek <dopaek@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:38:12 by dopaek            #+#    #+#             */
/*   Updated: 2022/02/21 11:38:17 by dopaek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest [i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		len;

	len = ft_strlen(src);
	cpy = malloc(sizeof(char) * (len + 1));
	if (cpy == 0)
		return (0);
	return (ft_strcpy(cpy, src));
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*st;
	int			i;

	if (ac < 0)
		ac = 0;
	st = malloc((ac + 1) * sizeof(t_stock_str));
	if (st == 0)
		return (NULL);
	i = -1;
	while (++i < ac)
	{
		st[i].size = ft_strlen(av[i]);
		st[i].str = av[i];
		st[i].copy = ft_strdup(av[i]);
	}
	st[i].str = 0;
	return (st);
}
