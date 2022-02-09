/*  ************************************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopaek <dopaek@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 09:48:43 by dopaek            #+#    #+#             */
/*   Updated: 2022/02/06 18:23:21 by kihyukim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	convert(char *c)
{
	int		n;
	int		error;
	char	*temp;

	temp = c;
	while (*temp != '\0')
	{
		if (!(*temp >= 48 && *temp <= 57))
			error = 1;
		temp++;
	}
	while (*c)
	{
		if (error == 1)
			return (-1);
		n = 0;
		while (*c >= 48 && *c <= 57)
		{
			n = n * 10 + *c - 48;
			c++;
		}
		return (n);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
		rush(convert(argv[1]), convert(argv[2]));
	return (0);
}
