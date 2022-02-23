/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dopaek <dopaek@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 20:09:53 by dopaek            #+#    #+#             */
/*   Updated: 2022/02/22 20:09:55 by dopaek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int		add(int n1, int n2);
int		minus(int n1, int n2);
int		mul(int n1, int n2);
int		div(int n1, int n2);
int		mod(int n1, int n2);
int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_doop(int x, char cal, int y);
void	ft_putnbr(int nb);

#endif
