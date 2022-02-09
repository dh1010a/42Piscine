/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopaek <dopaek@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:58:11 by dopaek            #+#    #+#             */
/*   Updated: 2022/02/09 10:12:16 by dopaek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	is_alphanum(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	first;
	int	i;

	i = -1;
	first = 1;
	while (str[++i])
	{
		if (is_alphanum(str[i]) == 1)
		{
			if (first == 1)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] = str[i] - 32;
			}
			else
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] += 32;
			first = 0;
		}
		else
		{
			first = 1;
		}
	}
	return (str);
}
