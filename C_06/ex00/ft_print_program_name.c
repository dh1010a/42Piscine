/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopaek <dopaek@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 19:24:18 by dopaek            #+#    #+#             */
/*   Updated: 2022/02/13 19:24:19 by dopaek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	dump;

	dump = argc;
	i = 0;
	while (argv[0][i])
	{
		i++;
	}
	write(1, argv[0], i);
	ft_putchar('\n');
	return (0);
}
