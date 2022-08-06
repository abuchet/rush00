/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuchet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 13:34:15 by abuchet           #+#    #+#             */
/*   Updated: 2022/08/06 13:58:22 by abuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ligne1(int a)
{
	int	i;

	i = 2;
	ft_putchar('/');
	while (i < a)
	{
		ft_putchar('*');
		i++;
	}
	if (i == a)
	{
		ft_putchar('\\');
	}
}

void	ligne2(int a)
{
	int	j;

	j = 2;
	ft_putchar('*');
	while (j < a)
	{
		ft_putchar(' ');
		j++;
	}
	if (j == a)
	{
		ft_putchar('*');
	}
}

void	ligne3(int a)
{
	int	l;

	l = 2;
	ft_putchar('\\');
	while (l < a)
	{
		ft_putchar('*');
		l++;
	}
	if (l == a)
	{
		ft_putchar('/');
	}
}

void	rush(int a, int b)
{
	int	k;

	k = 2;
	if (a && b > 0)
	{
		ligne1(a);
		ft_putchar('\n');
		while (k < b)
		{
			ligne2(a);
			k++;
			ft_putchar('\n');
		}
		if (k == b)
		{
			ligne3(a);
			ft_putchar('\n');
		}
	}
}
