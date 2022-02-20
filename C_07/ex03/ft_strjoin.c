/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopaek <dopaek@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:42:31 by dopaek            #+#    #+#             */
/*   Updated: 2022/02/20 08:31:27 by dopaek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest [i] = '\0';
	return (dest);
}

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	get_len(int size, char **strs, char *sep)
{
	int	i;
	int	n;

	n = 0;
	i = 0;
	while (++i < size)
		n += ft_len(strs[i]);
	if (size > 0)
		n += (size - 1) * ft_len(sep);
	return (n);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	int		j;
	char	*dest;

	i = -1;
	len = get_len(size, strs, sep);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == 0)
		return (0);
	j = 0;
	i = 0;
	while (i < size)
	{
		ft_strcpy(dest + j, strs[i]);
		j += ft_len(strs[i]);
		i++;
		if (i < size)
		{
			ft_strcpy(dest + j, sep);
			j += ft_len(sep);
		}
	}
	dest[j] = 0;
	return (dest);
}
