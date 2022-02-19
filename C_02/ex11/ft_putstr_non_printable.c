/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopaek <dopaek@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:32:00 by dopaek            #+#    #+#             */
/*   Updated: 2022/02/12 12:05:20 by dopaek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	put_16(char c)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hexa[(unsigned char)c / 16]);
	ft_putchar(hexa[(unsigned char)c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if ((str[i] < ' ' || str[i] == 127) && str[i] >= 0)
			put_16(str[i]);
		else if (str[i] < 0)
		{
			put_16(str[i]);
		}
		else
			ft_putchar(str[i]);
	}
}
