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

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
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
	int	len;
	int	sep_len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_len(strs[i]);
		i++;
	}
	sep_len = ft_len(sep) * (size - 1);
	len += sep_len;
	return (len);
}

char	*size_zero(void)
{
	char	*dest;

	dest = (char *)malloc(sizeof(char));
	dest[0] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*dest;

	i = get_len(size, strs, sep);
	if (size == 0)
		return (size_zero());
	dest = (char *)malloc(sizeof(char) * (i + 1));
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
	return (dest);
}
