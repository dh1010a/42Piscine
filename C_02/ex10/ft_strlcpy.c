/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopaek <dopaek@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 10:15:52 by dopaek            #+#    #+#             */
/*   Updated: 2022/02/10 12:49:13 by dopaek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	n;
	unsigned int	i;

	i = -1;
	n = 0;
	while (src[++i])
		n++;
	if (n < size - 1)
	{
		i = -1;
		while (++i < n + 1)
			dest[i] = src[i];
	}
	else if (size > 0)
	{
		i = -1;
		while (++i < size - 1)
			dest[i] = src[i];
		dest[i] = '\0';
	}
	return (n);
}
