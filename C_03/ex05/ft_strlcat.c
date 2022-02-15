/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopaek <dopaek@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:36:47 by dopaek            #+#    #+#             */
/*   Updated: 2022/02/13 20:25:43 by dopaek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	src_len;
	unsigned int	dest_len;

	i = 0;
	while (dest[i])
		i++;
	dest_len = i;
	src_len = 0;
	while (src[src_len])
		src_len++;
	j = 0;
	if (size <= dest_len)
		return (src_len + size);
	while (src[j] && dest_len + j < size - 1)
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}
